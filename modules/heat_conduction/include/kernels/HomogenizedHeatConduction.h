//* This file is part of the MOOSE framework
//* https://www.mooseframework.org
//*
//* All rights reserved, see COPYRIGHT for full restrictions
//* https://github.com/idaholab/moose/blob/master/COPYRIGHT
//*
//* Licensed under LGPL 2.1, please see LICENSE for details
//* https://www.gnu.org/licenses/lgpl-2.1.html

#ifndef HOMOGENIZEDHEATCONDUCTION_H
#define HOMOGENIZEDHEATCONDUCTION_H

#include "Kernel.h"

/**
 * Homogenization of Temperature-Dependent Thermal Conductivity in Composite
 * Materials, Journal of Thermophysics and Heat Transfer, Vol. 15, No. 1,
 * January-March 2001.
 */
class HomogenizedHeatConduction : public Kernel
{
public:
  HomogenizedHeatConduction(const InputParameters & parameters);

protected:
  virtual Real computeQpResidual();

  const MaterialProperty<Real> & _diffusion_coefficient;
  const unsigned int _component;
};

template <>
InputParameters validParams<HomogenizedHeatConduction>();

#endif // HOMOGENIZEDHEATCONDUCTION_H
