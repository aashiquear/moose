//* This file is part of the MOOSE framework
//* https://www.mooseframework.org
//*
//* All rights reserved, see COPYRIGHT for full restrictions
//* https://github.com/idaholab/moose/blob/master/COPYRIGHT
//*
//* Licensed under LGPL 2.1, please see LICENSE for details
//* https://www.gnu.org/licenses/lgpl-2.1.html

#include "ZeroIC.h"

registerMooseObject("MooseTestApp", ZeroIC);

template <>
InputParameters
validParams<ZeroIC>()
{
  InputParameters params = validParams<InitialCondition>();
  return params;
}

ZeroIC::ZeroIC(const InputParameters & parameters) : InitialCondition(parameters) {}

Real
ZeroIC::value(const Point & /*p*/)
{
  return _zero[_qp];
}
