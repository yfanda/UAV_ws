// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from common_msgs:msg/XTraj.idl
// generated code does not contain a copyright notice
#include "common_msgs/msg/detail/x_traj__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
common_msgs__msg__XTraj__init(common_msgs__msg__XTraj * msg)
{
  if (!msg) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__double__Sequence__init(&msg->data, 0)) {
    common_msgs__msg__XTraj__fini(msg);
    return false;
  }
  return true;
}

void
common_msgs__msg__XTraj__fini(common_msgs__msg__XTraj * msg)
{
  if (!msg) {
    return;
  }
  // data
  rosidl_runtime_c__double__Sequence__fini(&msg->data);
}

bool
common_msgs__msg__XTraj__are_equal(const common_msgs__msg__XTraj * lhs, const common_msgs__msg__XTraj * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  return true;
}

bool
common_msgs__msg__XTraj__copy(
  const common_msgs__msg__XTraj * input,
  common_msgs__msg__XTraj * output)
{
  if (!input || !output) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  return true;
}

common_msgs__msg__XTraj *
common_msgs__msg__XTraj__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  common_msgs__msg__XTraj * msg = (common_msgs__msg__XTraj *)allocator.allocate(sizeof(common_msgs__msg__XTraj), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(common_msgs__msg__XTraj));
  bool success = common_msgs__msg__XTraj__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
common_msgs__msg__XTraj__destroy(common_msgs__msg__XTraj * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    common_msgs__msg__XTraj__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
common_msgs__msg__XTraj__Sequence__init(common_msgs__msg__XTraj__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  common_msgs__msg__XTraj * data = NULL;

  if (size) {
    data = (common_msgs__msg__XTraj *)allocator.zero_allocate(size, sizeof(common_msgs__msg__XTraj), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = common_msgs__msg__XTraj__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        common_msgs__msg__XTraj__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
common_msgs__msg__XTraj__Sequence__fini(common_msgs__msg__XTraj__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      common_msgs__msg__XTraj__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

common_msgs__msg__XTraj__Sequence *
common_msgs__msg__XTraj__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  common_msgs__msg__XTraj__Sequence * array = (common_msgs__msg__XTraj__Sequence *)allocator.allocate(sizeof(common_msgs__msg__XTraj__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = common_msgs__msg__XTraj__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
common_msgs__msg__XTraj__Sequence__destroy(common_msgs__msg__XTraj__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    common_msgs__msg__XTraj__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
common_msgs__msg__XTraj__Sequence__are_equal(const common_msgs__msg__XTraj__Sequence * lhs, const common_msgs__msg__XTraj__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!common_msgs__msg__XTraj__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
common_msgs__msg__XTraj__Sequence__copy(
  const common_msgs__msg__XTraj__Sequence * input,
  common_msgs__msg__XTraj__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(common_msgs__msg__XTraj);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    common_msgs__msg__XTraj * data =
      (common_msgs__msg__XTraj *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!common_msgs__msg__XTraj__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          common_msgs__msg__XTraj__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!common_msgs__msg__XTraj__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
