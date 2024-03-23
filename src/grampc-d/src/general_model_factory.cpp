/* This file is part of GRAMPC-D - (https://github.com/grampc-d/grampc-d.git)
 *
 * GRAMPC-D -- A software framework for distributed model predictive control (DMPC)
 * 
 *
 * Copyright 2023 by Daniel Burk, Maximilian Pierer von Esch, Andreas Voelz, Knut Graichen
 * All rights reserved.
 *
 * GRAMPC-D is distributed under the BSD-3-Clause license, see LICENSE.txt
 *
 */

#include "grampcd/general_model_factory.hpp"

#include "grampcd/info/agent_info.hpp"
#include "grampcd/info/coupling_info.hpp"

#include "grampcd/model/agent_model.hpp"
#include "grampcd/model/coupling_model.hpp"

#include "grampcd/UAV_agent_model.hpp"


GeneralModelFactory::GeneralModelFactory(const grampcd::LoggingPtr& log) :
	log_(log)
{

	map_agentModels_["UAV_agentModel"] = UAVAgentModel::create;
	// map_couplingModels_["UAV_couplingModel"] = WaterTankCouplingModel::create;
}

grampcd::AgentModelPtr GeneralModelFactory::create_agentModel(const grampcd::AgentInfo& info) const
{
	auto iterator = map_agentModels_.find(info.model_name_);

	if (iterator == map_agentModels_.end())
		log_->print(grampcd::DebugType::Error) << "Invalid model name '" << info.model_name_ << "'" << std::endl;

	return (*(iterator->second))(info.model_parameters_, info.cost_parameters_, info.model_name_, log_);
}

grampcd::CouplingModelPtr GeneralModelFactory::create_couplingModel(const grampcd::CouplingInfo& info) const
{
	auto iterator = map_couplingModels_.find(info.model_name_);

	if (iterator == map_couplingModels_.end())
		log_->print(grampcd::DebugType::Error) << "Invalid model name '" << info.model_name_ << "'" << std::endl;

	return (*(iterator->second))(info.model_parameters_, info.cost_parameters_, info.model_name_);
}
