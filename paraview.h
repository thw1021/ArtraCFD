/****************************************************************************
 *                              ArtraCFD                                    *
 *                          <By Huangrui Mo>                                *
 * Copyright (C) Huangrui Mo <huangrui.mo@gmail.com>                        *
 * This file is part of ArtraCFD.                                           *
 * ArtraCFD is free software: you can redistribute it and/or modify it      *
 * under the terms of the GNU General Public License as published by        *
 * the Free Software Foundation, either version 3 of the License, or        *
 * (at your option) any later version.                                      *
 ****************************************************************************/
/****************************************************************************
 * Header File Guards to Avoid Interdependence
 ****************************************************************************/
#ifndef ARTRACFD_PARAVIEW_H_ /* if this is the first definition */
#define ARTRACFD_PARAVIEW_H_ /* a unique marker for this header file */
/****************************************************************************
 * Required Header Files
 ****************************************************************************/
#include "commons.h"
/****************************************************************************
 * Data Structure Declarations
 ****************************************************************************/
/*
 * Paraview data format and type control
 */
typedef char ParaviewString[80]; /* Paraview string data */
typedef double ParaviewReal; /* Paraview real data */
typedef ParaviewReal ParaviewVector[3]; /* Paraview vector data */
/*
 * Paraview configuration structure
 */
typedef struct {
    ParaviewString rootName; /* data file root name */
    ParaviewString baseName; /* data file base name */
    ParaviewString fileName; /* store current open file name */
    ParaviewString fileExt; /* data file extension */
    ParaviewString intType; /* Paraview int type */
    ParaviewString floatType; /* Paraview float type */
    ParaviewString byteOrder; /* byte order of data */
}ParaviewSet;
/****************************************************************************
 * Public Functions Declaration
 ****************************************************************************/
/*
 * Structured data writer and reader
 */
extern int WriteStructuredDataParaview(const Space *, const Time *, const Model *);
extern int ReadStructuredDataParaview(Space *, Time *, const Model *);
/*
 * Point type poly data writer and reader
 */
extern int WritePointPolyDataParaview(const Geometry *, const Time *);
extern int ReadPointPolyDataParaview(Geometry *, Time *);
/*
 * Polygon type poly data writer and reader
 */
extern int WritePolygonPolyDataParaview(const Geometry *, const Time *);
extern int ReadPolygonPolyDataParaview(Geometry *, Time *);
#endif
/* a good practice: end file with a newline */

