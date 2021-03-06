/* -*- Mode: C++; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*- */
/*
 * This file is part of the LibreOffice project.
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * This file incorporates work covered by the following license notice:
 *
 *   Licensed to the Apache Software Foundation (ASF) under one or more
 *   contributor license agreements. See the NOTICE file distributed
 *   with this work for additional information regarding copyright
 *   ownership. The ASF licenses this file to you under the Apache
 *   License, Version 2.0 (the "License"); you may not use this file
 *   except in compliance with the License. You may obtain a copy of
 *   the License at http://www.apache.org/licenses/LICENSE-2.0 .
 */

#ifndef INCLUDED_SVX_SVDDEF_HXX
#define INCLUDED_SVX_SVDDEF_HXX

#include <svx/xdef.hxx>
#include <svl/typedwhich.hxx>

/*************************************************************************/
// SdrItemPool V2, 09-11-1995:
//      7 new Items for XLineAttrSetItem
//      7 new Items for XFillAttrSetItem
//      8 new Items for SdrShadowSetItem
//      5 new Items for SdrCaptionSetItem
//     25 new Items for SdrMiscSetItem
//      6 new Items for SdrNotPersist
// SdrItemPool V3, 29-02-1996
//     17 new Items for XFillAttrSetItem (Bitmapfill)
// SdrItemPool V4, 10-08-1996
//     45 new Items for Edge and Measure (Connector and Measuring object)
// SdrItemPool V4+, 18-10-1996
//      8 new Items for CircItems
//     18 new Items for NotPersist + Refactoring there
// SdrItemPool V4++, 13-11-1996
//      2 new Items for NotPersist+(MoveX/Y)
// SdrItemPool V4+++, 07-06-1999
//     15 new Items for NotPersist (Reserve)
//     15 new Items for GrafItems

//   WhichMapping:
//     V1 Range = 1000..1065  (66)
//     V2 Range = 1000..1123 (124) (58 new Whiches)
//     V3 Range = 1000..1140 (141) (17 new Whiches)
//     V4 Range = 1000..1185 (186) (45 new Whiches)
//     Map V2:  10           6          20           4          11           6           9
//     V1:  1000..1009, 1010..1015, 1016..1035, 1036..1039, 1040..1050, 1051..1056  1057..1065
//     V2:  1000..1009, 1017..1022, 1030..1049, 1050..1053, 1062..1072, 1078..1083, 1109..1117, and 6 new ones appended at the end
//          |<------------ XOut ------------>|  |<----------- SvDraw ----------->
//     Map V3:
//     V2:  1000..1029, 1030..1123
//     V3:  1000..1029, 1047..1140
//     Map V4:
//     V3:  1000..1126, 1127..1140
//     V4:  1000..1126, 1172..1185

class SdrAllPositionXItem;
class SdrAllPositionYItem;
class SdrAllSizeHeightItem;
class SdrAllSizeWidthItem;
class SdrAngleItem;
class SdrCaptionEscAbsItem;
class SdrCaptionEscDirItem;
class SdrCaptionEscIsRelItem;
class SdrCaptionEscRelItem;
class SdrCaptionFitLineLenItem;
class SdrCaptionLineLenItem;
class SdrCaptionTypeItem;
class SdrCircKindItem;
class SdrCustomShapeGeometryItem;
class SdrEdgeKindItem;
class SdrEdgeLineDeltaCountItem;
class SdrEdgeNode1GlueDistItem;
class SdrEdgeNode1HorzDistItem;
class SdrEdgeNode1VertDistItem;
class SdrEdgeNode2GlueDistItem;
class SdrEdgeNode2HorzDistItem;
class SdrEdgeNode2VertDistItem;
class SdrGrafBlueItem;
class SdrGrafContrastItem;
class SdrGrafCropItem;
class SdrGrafGamma100Item;
class SdrGrafGreenItem;
class SdrGrafInvertItem;
class SdrGrafLuminanceItem;
class SdrGrafModeItem;
class SdrGrafRedItem;
class SdrGrafTransparenceItem;
class SdrHorzShearAllItem;
class SdrHorzShearOneItem;
class SdrLayerIdItem;
class SdrLayerNameItem;
class SdrLogicSizeHeightItem;
class SdrLogicSizeWidthItem;
class SdrMeasureBelowRefEdgeItem;
class SdrMeasureDecimalPlacesItem;
class SdrMeasureFormatStringItem;
class SdrMeasureKindItem;
class SdrMeasureOverhangItem;
class SdrMeasureTextAutoAngleItem;
class SdrMeasureTextFixedAngleItem;
class SdrMeasureTextHPosItem;
class SdrMeasureTextIsFixedAngleItem;
class SdrMeasureTextRota90Item;
class SdrMeasureTextVPosItem;
class SdrMeasureUnitItem;
class SdrMetricItem;
class SdrMoveXItem;
class SdrMoveYItem;
class SdrObjPrintableItem;
class SdrObjVisibleItem;
class SdrOnOffItem;
class SdrOnePositionXItem;
class SdrOnePositionYItem;
class SdrOneSizeHeightItem;
class SdrOneSizeWidthItem;
class SdrPercentItem;
class SdrResizeXAllItem;
class SdrResizeXOneItem;
class SdrResizeYAllItem;
class SdrResizeYOneItem;
class SdrRotateOneItem;
class SdrShearAngleItem;
class SdrTextFitToSizeTypeItem;
class SdrTextFixedCellHeightItem;
class SdrTextVertAdjustItem;
class SdrTransformRef1XItem;
class SdrTransformRef1YItem;
class SdrTransformRef2XItem;
class SdrTransformRef2YItem;
class SdrVertShearAllItem;
class SdrVertShearOneItem;
class SdrYesNoItem;
class SfxBoolItem;
class SfxUInt16Item;
class SfxUInt32Item;
class SfxStringItem;
class SfxVoidItem;
class Svx3DCharacterModeItem;
class Svx3DCloseBackItem;
class Svx3DCloseFrontItem;
class Svx3DNormalsKindItem;
class Svx3DPerspectiveItem;
class Svx3DReducedLineGeometryItem;
class Svx3DShadeModeItem;
class Svx3DSmoothLidsItem;
class Svx3DSmoothNormalsItem;
class Svx3DTextureProjectionXItem;
class Svx3DTextureProjectionYItem;
class SvxB3DVectorItem;
class SvxBoxInfoItem;
class SvxBoxItem;
class SvxColorItem;
class SvxLineItem;
class SvxTextRotateItem;
class SvxWritingModeItem;
class XColorItem;
class SdrTextAniDirectionItem;
class SdrTextAniKindItem;
class SdrTextHorzAdjustItem;

#define SDRATTR_START               XATTR_START                    /* 1000   */
                                                                                                         /* Pool V4*/ /* Pool V3*/ /* Pool V2*/
#define SDRATTR_SHADOW_FIRST            (XATTR_END + 1)                                                  /* 1067   */ /* 1067   */ /* 1050   */ /* Pool V1: 1036 */
#define SDRATTR_SHADOW                  TypedWhichId<SdrOnOffItem>(SDRATTR_SHADOW_FIRST+ 0)              /*   1067 */ /*   1067 */ /*   1050 */
#define SDRATTR_SHADOWCOLOR             TypedWhichId<XColorItem>(SDRATTR_SHADOW_FIRST+ 1)                /*   1068 */ /*   1068 */ /*   1051 */
#define SDRATTR_SHADOWXDIST             TypedWhichId<SdrMetricItem>(SDRATTR_SHADOW_FIRST+ 2)             /*   1069 */ /*   1069 */ /*   1052 */
#define SDRATTR_SHADOWYDIST             TypedWhichId<SdrMetricItem>(SDRATTR_SHADOW_FIRST+ 3)             /*   1070 */ /*   1070 */ /*   1053 */
#define SDRATTR_SHADOWTRANSPARENCE      TypedWhichId<SdrPercentItem>(SDRATTR_SHADOW_FIRST+ 4)            /*   1071 */ /*   1071 */ /*   1054 */ /* Pool V2 */
#define SDRATTR_SHADOW3D                TypedWhichId<SfxVoidItem>(SDRATTR_SHADOW_FIRST+ 5)               /*   1072 */ /*   1072 */ /*   1055 */ /* Pool V2 */
#define SDRATTR_SHADOWPERSP             TypedWhichId<SfxVoidItem>(SDRATTR_SHADOW_FIRST+ 6)               /*   1073 */ /*   1073 */ /*   1056 */ /* Pool V2 */
#define SDRATTR_SHADOW_LAST             (SDRATTR_SHADOWPERSP)                                            /* 1078   */ /* 1078   */ /* 1061   */ /* Pool V1: 1039 */

#define SDRATTR_CAPTION_FIRST           (SDRATTR_SHADOW_LAST + 1)                                        /* 1080   */ /* 1080   */ /* 1063   */ /* Pool V1: 1041 */
#define SDRATTR_CAPTIONTYPE             TypedWhichId<SdrCaptionTypeItem>(SDRATTR_CAPTION_FIRST+ 0)       /*   1080 */ /*   1080 */ /*   1063 */
#define SDRATTR_CAPTIONFIXEDANGLE       TypedWhichId<SdrOnOffItem>(SDRATTR_CAPTION_FIRST+ 1)             /*   1081 */ /*   1081 */ /*   1064 */
#define SDRATTR_CAPTIONANGLE            TypedWhichId<SdrAngleItem>(SDRATTR_CAPTION_FIRST+ 2)             /*   1082 */ /*   1082 */ /*   1065 */
#define SDRATTR_CAPTIONGAP              TypedWhichId<SdrMetricItem>(SDRATTR_CAPTION_FIRST+ 3)            /*   1083 */ /*   1083 */ /*   1066 */
#define SDRATTR_CAPTIONESCDIR           TypedWhichId<SdrCaptionEscDirItem>(SDRATTR_CAPTION_FIRST+ 4)     /*   1084 */ /*   1084 */ /*   1067 */
#define SDRATTR_CAPTIONESCISREL         TypedWhichId<SdrCaptionEscIsRelItem>(SDRATTR_CAPTION_FIRST+ 5)   /*   1085 */ /*   1085 */ /*   1068 */
#define SDRATTR_CAPTIONESCREL           TypedWhichId<SdrCaptionEscRelItem>(SDRATTR_CAPTION_FIRST+ 6)     /*   1086 */ /*   1086 */ /*   1069 */
#define SDRATTR_CAPTIONESCABS           TypedWhichId<SdrCaptionEscAbsItem>(SDRATTR_CAPTION_FIRST+ 7)     /*   1087 */ /*   1087 */ /*   1070 */
#define SDRATTR_CAPTIONLINELEN          TypedWhichId<SdrCaptionLineLenItem>(SDRATTR_CAPTION_FIRST+ 8)    /*   1088 */ /*   1088 */ /*   1071 */
#define SDRATTR_CAPTIONFITLINELEN       TypedWhichId<SdrCaptionFitLineLenItem>(SDRATTR_CAPTION_FIRST+ 9) /*   1089 */ /*   1089 */ /*   1072 */
#define SDRATTR_CAPTION_LAST            (SDRATTR_CAPTIONFITLINELEN)                                      /* 1094   */ /* 1094   */ /* 1077   */ /* Pool V1: 1050 */

#define SDRATTR_MISC_FIRST              (SDRATTR_CAPTION_LAST + 1)                                       /* 1097   */ /* 1097   */ /* 1080   */ /* Pool V1: 1053 */
#define SDRATTR_ECKENRADIUS             TypedWhichId<SdrMetricItem>(SDRATTR_MISC_FIRST + 0)              /*   1097 */ /*   1097 */ /*   1080 long, def=0       */
#define SDRATTR_TEXT_MINFRAMEHEIGHT     TypedWhichId<SdrMetricItem>(SDRATTR_MISC_FIRST + 1)              /*   1098 */ /*   1098 */ /*   1081 long, def=0       */
#define SDRATTR_TEXT_AUTOGROWHEIGHT     TypedWhichId<SdrOnOffItem>(SDRATTR_MISC_FIRST + 2)               /*   1099 */ /*   1099 */ /*   1082 sal_Bool, def=sal_True    */
#define SDRATTR_TEXT_FITTOSIZE          TypedWhichId<SdrTextFitToSizeTypeItem>(SDRATTR_MISC_FIRST + 3)   /*   1100 */ /*   1100 */ /*   1083 enum, def=css::drawing::TextFitToSizeType_NONE */
#define SDRATTR_TEXT_LEFTDIST           TypedWhichId<SdrMetricItem>(SDRATTR_MISC_FIRST + 4)              /*   1101 */ /*   1101 */ /*   1084 long, def=0 */ /* Pool V2 */
#define SDRATTR_TEXT_RIGHTDIST          TypedWhichId<SdrMetricItem>(SDRATTR_MISC_FIRST + 5)              /*   1102 */ /*   1102 */ /*   1085 long, def=0 */ /* Pool V2 */
#define SDRATTR_TEXT_UPPERDIST          TypedWhichId<SdrMetricItem>(SDRATTR_MISC_FIRST + 6)              /*   1103 */ /*   1103 */ /*   1086 long, def=0 */ /* Pool V2 */
#define SDRATTR_TEXT_LOWERDIST          TypedWhichId<SdrMetricItem>(SDRATTR_MISC_FIRST + 7)              /*   1104 */ /*   1104 */ /*   1087 long, def=0 */ /* Pool V2 */
#define SDRATTR_TEXT_VERTADJUST         TypedWhichId<SdrTextVertAdjustItem>(SDRATTR_MISC_FIRST + 8)      /*   1105 */ /*   1105 */ /*   1088 enum, def=SDRTEXTVERTADJUST_TOP */ /* Pool V2 */
#define SDRATTR_TEXT_MAXFRAMEHEIGHT     TypedWhichId<SdrMetricItem>(SDRATTR_MISC_FIRST + 9)              /*   1106 */ /*   1106 */ /*   1089 long, def=0     - Pool V2 */
#define SDRATTR_TEXT_MINFRAMEWIDTH      TypedWhichId<SdrMetricItem>(SDRATTR_MISC_FIRST +10)              /*   1107 */ /*   1107 */ /*   1090 long, def=0     - Pool V2 */
#define SDRATTR_TEXT_MAXFRAMEWIDTH      TypedWhichId<SdrMetricItem>(SDRATTR_MISC_FIRST +11)              /*   1108 */ /*   1108 */ /*   1091 long, def=0     - Pool V2 */
#define SDRATTR_TEXT_AUTOGROWWIDTH      TypedWhichId<SdrOnOffItem>(SDRATTR_MISC_FIRST +12)               /*   1109 */ /*   1109 */ /*   1092 sal_Bool, def=sal_False - Pool V2 */
#define SDRATTR_TEXT_HORZADJUST         TypedWhichId<SdrTextHorzAdjustItem>(SDRATTR_MISC_FIRST +13)      /*   1110 */ /*   1110 */ /*   1093 enum, def=SDRTEXTHORZADJUST_LEFT */ /* Pool V2+ (04-12-1995) */
#define SDRATTR_TEXT_ANIKIND            TypedWhichId<SdrTextAniKindItem>(SDRATTR_MISC_FIRST +14)         /*   1111 */ /*   1111 */ /*   1094 enum, def=SdrTextAniKind::NONE - Pool V2/V4 */
#define SDRATTR_TEXT_ANIDIRECTION       TypedWhichId<SdrTextAniDirectionItem>(SDRATTR_MISC_FIRST +15)    /*   1112 */ /*   1112 */ /*   1095 enum, def=SdrTextAniDirection::Left - Pool V2/V4 */
#define SDRATTR_TEXT_ANISTARTINSIDE     TypedWhichId<SdrTextAniStartInsideItem>(SDRATTR_MISC_FIRST +16)  /*   1113 */ /*   1113 */ /*   1096 sal_Bool, def=sal_False - Pool V2/V4 */
#define SDRATTR_TEXT_ANISTOPINSIDE      TypedWhichId<SdrTextAniStopInsideItem>(SDRATTR_MISC_FIRST +17)   /*   1114 */ /*   1114 */ /*   1097 sal_Bool, def=sal_False - Pool V2/V4 */
#define SDRATTR_TEXT_ANICOUNT           TypedWhichId<SdrTextAniCountItem>(SDRATTR_MISC_FIRST +18)        /*   1115 */ /*   1115 */ /*   1098 sal_uInt16, def=0   - Pool V2/V4 */
#define SDRATTR_TEXT_ANIDELAY           TypedWhichId<SdrTextAniDelayItem>(SDRATTR_MISC_FIRST +19)        /*   1116 */ /*   1116 */ /*   1099 sal_uInt16, def=0   - Pool V2/V4 */
#define SDRATTR_TEXT_ANIAMOUNT          TypedWhichId<SdrTextAniAmountItem>(SDRATTR_MISC_FIRST +20)       /*   1117 */ /*   1117 */ /*   1100 sal_uInt16, def=0   - Pool V2/V4 */
#define SDRATTR_TEXT_CONTOURFRAME       TypedWhichId<SdrOnOffItem>(SDRATTR_MISC_FIRST +21)               /*   1118 */ /*   1118 */ /*   1101 */             /* Pool V2 */
#define SDRATTR_XMLATTRIBUTES           TypedWhichId<SvXMLAttrContainerItem>(SDRATTR_MISC_FIRST +22)     /*   1120 */ /*   1120 */ /*   1103 */             /* Pool V2 */
#define SDRATTR_TEXT_USEFIXEDCELLHEIGHT TypedWhichId<SdrTextFixedCellHeightItem>(SDRATTR_MISC_FIRST +23) /*   1121 */ /*   1121 */ /*   1104 */             /* Pool V2 */
#define SDRATTR_TEXT_WORDWRAP           TypedWhichId<SdrOnOffItem>(SDRATTR_MISC_FIRST +24)               /*   1122 */ /*   1122 */ /*   1105 */             /* Pool V2 */
#define SDRATTR_TEXT_CHAINNEXTNAME      TypedWhichId<SfxStringItem>(SDRATTR_MISC_FIRST +25)              /*   1123 */ /*   1123 */ /*   1106 */             /* Pool V2 */
#define SDRATTR_MISC_LAST               (SDRATTR_TEXT_CHAINNEXTNAME)                                     /* 1125   */ /* 1125   */ /* 1108   */ /* Pool V1: 1056 */

#define SDRATTR_EDGE_FIRST              (SDRATTR_MISC_LAST + 1)                                          /* 1127   */ /* Pool V4 */
#define SDRATTR_EDGEKIND                TypedWhichId<SdrEdgeKindItem>(SDRATTR_EDGE_FIRST + 0)            /*   1127 */ /* Pool V4 */
#define SDRATTR_EDGENODE1HORZDIST       TypedWhichId<SdrEdgeNode1HorzDistItem>(SDRATTR_EDGE_FIRST + 1)   /*   1128 */ /* Pool V4 */
#define SDRATTR_EDGENODE1VERTDIST       TypedWhichId<SdrEdgeNode1VertDistItem>(SDRATTR_EDGE_FIRST + 2)   /*   1129 */ /* Pool V4 */
#define SDRATTR_EDGENODE2HORZDIST       TypedWhichId<SdrEdgeNode2HorzDistItem>(SDRATTR_EDGE_FIRST + 3)   /*   1130 */ /* Pool V4 */
#define SDRATTR_EDGENODE2VERTDIST       TypedWhichId<SdrEdgeNode2VertDistItem>(SDRATTR_EDGE_FIRST + 4)   /*   1131 */ /* Pool V4 */
#define SDRATTR_EDGENODE1GLUEDIST       TypedWhichId<SdrEdgeNode1GlueDistItem>(SDRATTR_EDGE_FIRST + 5)   /*   1132 */ /* Pool V4 */
#define SDRATTR_EDGENODE2GLUEDIST       TypedWhichId<SdrEdgeNode2GlueDistItem>(SDRATTR_EDGE_FIRST + 6)   /*   1133 */ /* Pool V4 */
#define SDRATTR_EDGELINEDELTACOUNT      TypedWhichId<SdrEdgeLineDeltaCountItem>(SDRATTR_EDGE_FIRST + 7)  /*   1134 */ /* Pool V4 */
#define SDRATTR_EDGELINE1DELTA          TypedWhichId<SdrMetricItem>(SDRATTR_EDGE_FIRST + 8)              /*   1135 */ /* Pool V4 */
#define SDRATTR_EDGELINE2DELTA          TypedWhichId<SdrMetricItem>(SDRATTR_EDGE_FIRST + 9)              /*   1136 */ /* Pool V4 */
#define SDRATTR_EDGELINE3DELTA          TypedWhichId<SdrMetricItem>(SDRATTR_EDGE_FIRST +10)              /*   1137 */ /* Pool V4 */
#define SDRATTR_EDGE_LAST               (SDRATTR_EDGELINE3DELTA)                                         /* 1145   */ /* Pool V4 */

#define SDRATTR_MEASURE_FIRST            (SDRATTR_EDGE_LAST + 1)                                         /* 1147   */ /* Pool V4 */
#define SDRATTR_MEASUREKIND              TypedWhichId<SdrMeasureKindItem>(SDRATTR_MEASURE_FIRST+ 0)      /*   1147 */ /* Pool V4 */
#define SDRATTR_MEASURETEXTHPOS          TypedWhichId<SdrMeasureTextHPosItem>(SDRATTR_MEASURE_FIRST+ 1)  /*   1148 */ /* Pool V4 */
#define SDRATTR_MEASURETEXTVPOS          TypedWhichId<SdrMeasureTextVPosItem>(SDRATTR_MEASURE_FIRST+ 2)  /*   1149 */ /* Pool V4 */
#define SDRATTR_MEASURELINEDIST          TypedWhichId<SdrMetricItem>(SDRATTR_MEASURE_FIRST+ 3)           /*   1150 */ /* Pool V4 */
#define SDRATTR_MEASUREHELPLINEOVERHANG  TypedWhichId<SdrMetricItem>(SDRATTR_MEASURE_FIRST+ 4)           /*   1151 */ /* Pool V4 */
#define SDRATTR_MEASUREHELPLINEDIST      TypedWhichId<SdrMetricItem>(SDRATTR_MEASURE_FIRST+ 5)           /*   1152 */ /* Pool V4 */
#define SDRATTR_MEASUREHELPLINE1LEN      TypedWhichId<SdrMetricItem>(SDRATTR_MEASURE_FIRST+ 6)           /*   1153 */ /* Pool V4 */
#define SDRATTR_MEASUREHELPLINE2LEN      TypedWhichId<SdrMetricItem>(SDRATTR_MEASURE_FIRST+ 7)           /*   1154 */ /* Pool V4 */
#define SDRATTR_MEASUREBELOWREFEDGE      TypedWhichId<SdrMeasureBelowRefEdgeItem>(SDRATTR_MEASURE_FIRST+ 8) /*   1155 */ /* Pool V4 */
#define SDRATTR_MEASURETEXTROTA90        TypedWhichId<SdrMeasureTextRota90Item>(SDRATTR_MEASURE_FIRST+ 9)/*   1156 */ /* Pool V4 */
#define SDRATTR_MEASURETEXTUPSIDEDOWN    TypedWhichId<SdrYesNoItem>(SDRATTR_MEASURE_FIRST+10)            /*   1157 */ /* Pool V4 */
#define SDRATTR_MEASUREOVERHANG          TypedWhichId<SdrMeasureOverhangItem>(SDRATTR_MEASURE_FIRST+11)  /*   1158 */ /* Pool V4 */
#define SDRATTR_MEASUREUNIT              TypedWhichId<SdrMeasureUnitItem>(SDRATTR_MEASURE_FIRST+12)      /*   1159 */ /* Pool V4 */
#define SDRATTR_MEASURESCALE             TypedWhichId<SdrMeasureScaleItem>(SDRATTR_MEASURE_FIRST+13)     /*   1160 */ /* Pool V4 */
#define SDRATTR_MEASURESHOWUNIT          TypedWhichId<SdrYesNoItem>(SDRATTR_MEASURE_FIRST+14)            /*   1161 */ /* Pool V4 */
#define SDRATTR_MEASUREFORMATSTRING      TypedWhichId<SdrMeasureFormatStringItem>(SDRATTR_MEASURE_FIRST+15) /*   1162 */ /* Pool V4 */
#define SDRATTR_MEASURETEXTAUTOANGLE     TypedWhichId<SdrMeasureTextAutoAngleItem>(SDRATTR_MEASURE_FIRST+16) /*   1163 */ /* Pool V4, Correction 25-9-1996 */
#define SDRATTR_MEASURETEXTAUTOANGLEVIEW TypedWhichId<SdrAngleItem>(SDRATTR_MEASURE_FIRST+17)            /*   1164 */ /* Pool V4, Correction 25-9-1996  */
#define SDRATTR_MEASURETEXTISFIXEDANGLE  TypedWhichId<SdrMeasureTextIsFixedAngleItem>(SDRATTR_MEASURE_FIRST+18) /*   1165 */ /* Pool V4, Correction 25-9-1996  */
#define SDRATTR_MEASURETEXTFIXEDANGLE    TypedWhichId<SdrMeasureTextFixedAngleItem>(SDRATTR_MEASURE_FIRST+19) /*   1166 */ /* Pool V4, Correction 25-9-1996  */
#define SDRATTR_MEASUREDECIMALPLACES     TypedWhichId<SdrMeasureDecimalPlacesItem>(SDRATTR_MEASURE_FIRST+20) /*   1167 */ /* Pool V4 */
#define SDRATTR_MEASURE_LAST             (SDRATTR_MEASUREDECIMALPLACES)                                  /* 1170   */ /* Pool V4 */

#define SDRATTR_CIRC_FIRST              (SDRATTR_MEASURE_LAST+ 1)                                        /* 1172   */ /* Pool V4+ */
#define SDRATTR_CIRCKIND                TypedWhichId<SdrCircKindItem>(SDRATTR_CIRC_FIRST+ 0)             /*   1172 */ /* Pool V4+ */
#define SDRATTR_CIRCSTARTANGLE          TypedWhichId<SdrAngleItem>(SDRATTR_CIRC_FIRST+ 1)                /*   1173 */ /* Pool V4+ */
#define SDRATTR_CIRCENDANGLE            TypedWhichId<SdrAngleItem>(SDRATTR_CIRC_FIRST+ 2)                /*   1174 */ /* Pool V4+ */
#define SDRATTR_CIRC_LAST               (SDRATTR_CIRCENDANGLE)                                           /*   1178 */ /* Pool V4+ */

// Only for Interfacing, not yet implemented. / * + * V4 /
#define SDRATTR_NOTPERSIST_FIRST    (SDRATTR_CIRC_LAST + 1)                                             /* 1180   */ /* 1172   */ /* 1127   */ /* 1110   */ /* Pool V1: 1058 */
#define SDRATTR_OBJMOVEPROTECT      TypedWhichId<SdrYesNoItem>(SDRATTR_NOTPERSIST_FIRST+ 0)             /*   1180  sal_Bool,   def=sal_False */
#define SDRATTR_OBJSIZEPROTECT      TypedWhichId<SdrYesNoItem>(SDRATTR_NOTPERSIST_FIRST+ 1)             /*   1181  sal_Bool,   def=sal_False */
#define SDRATTR_OBJPRINTABLE        TypedWhichId<SdrObjPrintableItem>(SDRATTR_NOTPERSIST_FIRST+ 2)      /*   1182  sal_Bool,   def=sal_True  */
#define SDRATTR_LAYERID             TypedWhichId<SdrLayerIdItem>(SDRATTR_NOTPERSIST_FIRST+ 3)           /*   1183  sal_uInt16, def=0     */
#define SDRATTR_LAYERNAME           TypedWhichId<SdrLayerNameItem>(SDRATTR_NOTPERSIST_FIRST+ 4)         /*   1184  String, def=""    */
#define SDRATTR_OBJECTNAME          TypedWhichId<SfxStringItem>(SDRATTR_NOTPERSIST_FIRST+ 5)            /*   1185  String, def=""    */
#define SDRATTR_ALLPOSITIONX        TypedWhichId<SdrAllPositionXItem>(SDRATTR_NOTPERSIST_FIRST+ 6)      /*   1186  long,   def=0     */
#define SDRATTR_ALLPOSITIONY        TypedWhichId<SdrAllPositionYItem>(SDRATTR_NOTPERSIST_FIRST+ 7)      /*   1187  long,   def=0     */
#define SDRATTR_ALLSIZEWIDTH        TypedWhichId<SdrAllSizeWidthItem>(SDRATTR_NOTPERSIST_FIRST+ 8)      /*   1188  long,   def=0     */
#define SDRATTR_ALLSIZEHEIGHT       TypedWhichId<SdrAllSizeHeightItem>(SDRATTR_NOTPERSIST_FIRST+ 9)     /*   1189  long,   def=0     */
#define SDRATTR_ONEPOSITIONX        TypedWhichId<SdrOnePositionXItem>(SDRATTR_NOTPERSIST_FIRST+10)      /*   1190  long,   def=0     */
#define SDRATTR_ONEPOSITIONY        TypedWhichId<SdrOnePositionYItem>(SDRATTR_NOTPERSIST_FIRST+11)      /*   1191  long,   def=0     */
#define SDRATTR_ONESIZEWIDTH        TypedWhichId<SdrOneSizeWidthItem>(SDRATTR_NOTPERSIST_FIRST+12)      /*   1192  long,   def=0     */
#define SDRATTR_ONESIZEHEIGHT       TypedWhichId<SdrOneSizeHeightItem>(SDRATTR_NOTPERSIST_FIRST+13)     /*   1193  long,   def=0     */
#define SDRATTR_LOGICSIZEWIDTH      TypedWhichId<SdrLogicSizeWidthItem>(SDRATTR_NOTPERSIST_FIRST+14)    /*   1194  long,   def=0     */
#define SDRATTR_LOGICSIZEHEIGHT     TypedWhichId<SdrLogicSizeHeightItem>(SDRATTR_NOTPERSIST_FIRST+15)   /*   1195  long,   def=0     */
#define SDRATTR_ROTATEANGLE         TypedWhichId<SdrAngleItem>(SDRATTR_NOTPERSIST_FIRST+16)             /*   1196  long,   def=0     */
#define SDRATTR_SHEARANGLE          TypedWhichId<SdrShearAngleItem>(SDRATTR_NOTPERSIST_FIRST+17)        /*   1197  long,   def=0     */
#define SDRATTR_MOVEX               TypedWhichId<SdrMoveXItem>(SDRATTR_NOTPERSIST_FIRST+18)             /*   1198  long,   def=0     */
#define SDRATTR_MOVEY               TypedWhichId<SdrMoveYItem>(SDRATTR_NOTPERSIST_FIRST+19)             /*   1199  long,   def=0     */
#define SDRATTR_RESIZEXONE          TypedWhichId<SdrResizeXOneItem>(SDRATTR_NOTPERSIST_FIRST+20)        /*   1200  long,   def=0     */
#define SDRATTR_RESIZEYONE          TypedWhichId<SdrResizeYOneItem>(SDRATTR_NOTPERSIST_FIRST+21)        /*   1201  long,   def=0     */
#define SDRATTR_ROTATEONE           TypedWhichId<SdrRotateOneItem>(SDRATTR_NOTPERSIST_FIRST+22)         /*   1202  long,   def=0     */
#define SDRATTR_HORZSHEARONE        TypedWhichId<SdrHorzShearOneItem>(SDRATTR_NOTPERSIST_FIRST+23)      /*   1203  long,   def=0     */
#define SDRATTR_VERTSHEARONE        TypedWhichId<SdrVertShearOneItem>(SDRATTR_NOTPERSIST_FIRST+24)      /*   1204  long,   def=0     */
#define SDRATTR_RESIZEXALL          TypedWhichId<SdrResizeXAllItem>(SDRATTR_NOTPERSIST_FIRST+25)        /*   1205  long,   def=0     */
#define SDRATTR_RESIZEYALL          TypedWhichId<SdrResizeYAllItem>(SDRATTR_NOTPERSIST_FIRST+26)        /*   1206  long,   def=0     */
#define SDRATTR_ROTATEALL           TypedWhichId<SdrRotateAllItem>(SDRATTR_NOTPERSIST_FIRST+27)         /*   1207  long,   def=0     */
#define SDRATTR_HORZSHEARALL        TypedWhichId<SdrHorzShearAllItem>(SDRATTR_NOTPERSIST_FIRST+28)      /*   1208  long,   def=0     */
#define SDRATTR_VERTSHEARALL        TypedWhichId<SdrVertShearAllItem>(SDRATTR_NOTPERSIST_FIRST+29)      /*   1209  long,   def=0     */
#define SDRATTR_TRANSFORMREF1X      TypedWhichId<SdrTransformRef1XItem>(SDRATTR_NOTPERSIST_FIRST+30)    /*   1210  long,   def=0     */
#define SDRATTR_TRANSFORMREF1Y      TypedWhichId<SdrTransformRef1YItem>(SDRATTR_NOTPERSIST_FIRST+31)    /*   1211  long,   def=0     */
#define SDRATTR_TRANSFORMREF2X      TypedWhichId<SdrTransformRef2XItem>(SDRATTR_NOTPERSIST_FIRST+32)    /*   1212  long,   def=0     */
#define SDRATTR_TRANSFORMREF2Y      TypedWhichId<SdrTransformRef2YItem>(SDRATTR_NOTPERSIST_FIRST+33)    /*   1213  long,   def=0     */
#define SDRATTR_TEXTDIRECTION       TypedWhichId<SvxWritingModeItem>(SDRATTR_NOTPERSIST_FIRST+34)       /*   1214 V4+++  long,   def=0     */
#define SDRATTR_OBJVISIBLE          TypedWhichId<SdrObjVisibleItem>(SDRATTR_NOTPERSIST_FIRST+35)
#define SDRATTR_NOTPERSIST_LAST     (SDRATTR_OBJVISIBLE)                                                /*   1228 V4+++*/ /* 1213*/  /*  1085 */ /*  1040 */ /*  1123 */ /* Pool V1: 1065 */
// no SetItem for this

#define SDRATTR_GRAF_FIRST          (SDRATTR_NOTPERSIST_LAST+1)                                         /*  1229 V4+++*/
#define SDRATTR_GRAFRED             TypedWhichId<SdrGrafRedItem>(SDRATTR_GRAF_FIRST+0)                  /*  1229 V4+++*/
#define SDRATTR_GRAFGREEN           TypedWhichId<SdrGrafGreenItem>(SDRATTR_GRAF_FIRST+1)                /*  1230 V4+++*/
#define SDRATTR_GRAFBLUE            TypedWhichId<SdrGrafBlueItem>(SDRATTR_GRAF_FIRST+2)                 /*  1231 V4+++*/
#define SDRATTR_GRAFLUMINANCE       TypedWhichId<SdrGrafLuminanceItem>(SDRATTR_GRAF_FIRST+3)            /*  1232 V4+++*/
#define SDRATTR_GRAFCONTRAST        TypedWhichId<SdrGrafContrastItem>(SDRATTR_GRAF_FIRST+4)             /*  1233 V4+++*/
#define SDRATTR_GRAFGAMMA           TypedWhichId<SdrGrafGamma100Item>(SDRATTR_GRAF_FIRST+5)             /*  1234 V4+++*/
#define SDRATTR_GRAFTRANSPARENCE    TypedWhichId<SdrGrafTransparenceItem>(SDRATTR_GRAF_FIRST+6)         /*  1235 V4+++*/
#define SDRATTR_GRAFINVERT          TypedWhichId<SdrGrafInvertItem>(SDRATTR_GRAF_FIRST+7)               /*  1236 V4+++*/
#define SDRATTR_GRAFMODE            TypedWhichId<SdrGrafModeItem>(SDRATTR_GRAF_FIRST+8)                 /*  1237 V4+++*/
#define SDRATTR_GRAFCROP            TypedWhichId<SdrGrafCropItem>(SDRATTR_GRAF_FIRST+9)                 /*  1238 V4+++*/
#define SDRATTR_GRAF_LAST           (SDRATTR_GRAFCROP)                                                  /*  1242 V4+++*/

#define SDRATTR_3D_FIRST                        (SDRATTR_GRAF_LAST + 1)     /* 1244 V4+++*/

#define SDRATTR_3DOBJ_FIRST                     (SDRATTR_3D_FIRST)          /* 1244 V4+++*/
#define SDRATTR_3DOBJ_PERCENT_DIAGONAL          TypedWhichId<SfxUInt16Item>(SDRATTR_3DOBJ_FIRST + 0)   /* 1244 V4+++*/
#define SDRATTR_3DOBJ_BACKSCALE                 TypedWhichId<SfxUInt16Item>(SDRATTR_3DOBJ_FIRST + 1)   /* 1245 V4+++*/
#define SDRATTR_3DOBJ_DEPTH                     TypedWhichId<SfxUInt32Item>(SDRATTR_3DOBJ_FIRST + 2)   /* 1246 V4+++*/
#define SDRATTR_3DOBJ_HORZ_SEGS                 TypedWhichId<SfxUInt32Item>(SDRATTR_3DOBJ_FIRST + 3)   /* 1247 V4+++*/
#define SDRATTR_3DOBJ_VERT_SEGS                 TypedWhichId<SfxUInt32Item>(SDRATTR_3DOBJ_FIRST + 4)   /* 1248 V4+++*/
#define SDRATTR_3DOBJ_END_ANGLE                 TypedWhichId<SfxUInt32Item>(SDRATTR_3DOBJ_FIRST + 5)   /* 1249 V4+++*/
#define SDRATTR_3DOBJ_DOUBLE_SIDED              TypedWhichId<SfxBoolItem>(SDRATTR_3DOBJ_FIRST + 6)   /* 1250 V4+++*/
#define SDRATTR_3DOBJ_NORMALS_KIND              TypedWhichId<Svx3DNormalsKindItem>(SDRATTR_3DOBJ_FIRST + 7)   /* 1251 V4+++*/
#define SDRATTR_3DOBJ_NORMALS_INVERT            TypedWhichId<SfxBoolItem>(SDRATTR_3DOBJ_FIRST + 8)   /* 1252 V4+++*/
#define SDRATTR_3DOBJ_TEXTURE_PROJ_X            TypedWhichId<Svx3DTextureProjectionXItem>(SDRATTR_3DOBJ_FIRST + 9)   /* 1253 V4+++*/
#define SDRATTR_3DOBJ_TEXTURE_PROJ_Y            TypedWhichId<Svx3DTextureProjectionYItem>(SDRATTR_3DOBJ_FIRST + 10)  /* 1254 V4+++*/
#define SDRATTR_3DOBJ_SHADOW_3D                 TypedWhichId<SfxBoolItem>(SDRATTR_3DOBJ_FIRST + 11)  /* 1255 V4+++*/
#define SDRATTR_3DOBJ_MAT_COLOR                 TypedWhichId<SvxColorItem>(SDRATTR_3DOBJ_FIRST + 12)  /* 1256 V4+++*/
#define SDRATTR_3DOBJ_MAT_EMISSION              TypedWhichId<SvxColorItem>(SDRATTR_3DOBJ_FIRST + 13)  /* 1257 V4+++*/
#define SDRATTR_3DOBJ_MAT_SPECULAR              TypedWhichId<SvxColorItem>(SDRATTR_3DOBJ_FIRST + 14)  /* 1258 V4+++*/
#define SDRATTR_3DOBJ_MAT_SPECULAR_INTENSITY    TypedWhichId<SfxUInt16Item>(SDRATTR_3DOBJ_FIRST + 15)  /* 1259 V4+++*/
#define SDRATTR_3DOBJ_TEXTURE_KIND              TypedWhichId<Svx3DTextureKindItem>(SDRATTR_3DOBJ_FIRST + 16)  /* 1260 V4+++*/
#define SDRATTR_3DOBJ_TEXTURE_MODE              TypedWhichId<Svx3DTextureModeItem>(SDRATTR_3DOBJ_FIRST + 17)  /* 1261 V4+++*/
#define SDRATTR_3DOBJ_TEXTURE_FILTER            TypedWhichId<SfxBoolItem>(SDRATTR_3DOBJ_FIRST + 18)  /* 1262 V4+++*/

// #107245# New items for 3d objects use former range SDRATTR_3DOBJ_RESERVED_01
// up to SDRATTR_3DOBJ_RESERVED_05
#define SDRATTR_3DOBJ_SMOOTH_NORMALS            TypedWhichId<Svx3DSmoothNormalsItem>(SDRATTR_3DOBJ_FIRST + 19)  /* 1263 V4+++*/
#define SDRATTR_3DOBJ_SMOOTH_LIDS               TypedWhichId<Svx3DSmoothLidsItem>(SDRATTR_3DOBJ_FIRST + 20)  /* 1264 V4+++*/
#define SDRATTR_3DOBJ_CHARACTER_MODE            TypedWhichId<Svx3DCharacterModeItem>(SDRATTR_3DOBJ_FIRST + 21)  /* 1265 V4+++*/
#define SDRATTR_3DOBJ_CLOSE_FRONT               TypedWhichId<Svx3DCloseFrontItem>(SDRATTR_3DOBJ_FIRST + 22)  /* 1266 V4+++*/
#define SDRATTR_3DOBJ_CLOSE_BACK                TypedWhichId<Svx3DCloseBackItem>(SDRATTR_3DOBJ_FIRST + 23)  /* 1267 V4+++*/

// #i28528#
// Added extra Item (Bool) for chart2 to be able to show reduced line geometry
#define SDRATTR_3DOBJ_REDUCED_LINE_GEOMETRY     TypedWhichId<Svx3DReducedLineGeometryItem>(SDRATTR_3DOBJ_FIRST + 24)  /* 1268 V4+++*/

#define SDRATTR_3DOBJ_LAST                      (SDRATTR_3DOBJ_REDUCED_LINE_GEOMETRY)   /* 1282 V4+++*/

#define SDRATTR_3DSCENE_FIRST                   (SDRATTR_3DOBJ_LAST + 1)        /* 1283 V4+++*/
#define SDRATTR_3DSCENE_PERSPECTIVE             TypedWhichId<Svx3DPerspectiveItem>(SDRATTR_3DSCENE_FIRST + 0)     /* 1283 V4+++*/
#define SDRATTR_3DSCENE_DISTANCE                TypedWhichId<SfxUInt32Item>(SDRATTR_3DSCENE_FIRST + 1)     /* 1284 V4+++*/
#define SDRATTR_3DSCENE_FOCAL_LENGTH            TypedWhichId<SfxUInt32Item>(SDRATTR_3DSCENE_FIRST + 2)     /* 1285 V4+++*/
#define SDRATTR_3DSCENE_TWO_SIDED_LIGHTING      TypedWhichId<SfxBoolItem>(SDRATTR_3DSCENE_FIRST + 3)     /* 1286 V4+++*/
#define SDRATTR_3DSCENE_LIGHTCOLOR_1            TypedWhichId<SvxColorItem>(SDRATTR_3DSCENE_FIRST + 4)     /* 1287 V4+++*/
#define SDRATTR_3DSCENE_LIGHTCOLOR_2            TypedWhichId<SvxColorItem>(SDRATTR_3DSCENE_FIRST + 5)     /* 1288 V4+++*/
#define SDRATTR_3DSCENE_LIGHTCOLOR_3            TypedWhichId<SvxColorItem>(SDRATTR_3DSCENE_FIRST + 6)     /* 1289 V4+++*/
#define SDRATTR_3DSCENE_LIGHTCOLOR_4            TypedWhichId<SvxColorItem>(SDRATTR_3DSCENE_FIRST + 7)     /* 1290 V4+++*/
#define SDRATTR_3DSCENE_LIGHTCOLOR_5            TypedWhichId<SvxColorItem>(SDRATTR_3DSCENE_FIRST + 8)     /* 1291 V4+++*/
#define SDRATTR_3DSCENE_LIGHTCOLOR_6            TypedWhichId<SvxColorItem>(SDRATTR_3DSCENE_FIRST + 9)     /* 1292 V4+++*/
#define SDRATTR_3DSCENE_LIGHTCOLOR_7            TypedWhichId<SvxColorItem>(SDRATTR_3DSCENE_FIRST + 10)    /* 1293 V4+++*/
#define SDRATTR_3DSCENE_LIGHTCOLOR_8            TypedWhichId<SvxColorItem>(SDRATTR_3DSCENE_FIRST + 11)    /* 1294 V4+++*/
#define SDRATTR_3DSCENE_AMBIENTCOLOR            TypedWhichId<SvxColorItem>(SDRATTR_3DSCENE_FIRST + 12)    /* 1295 V4+++*/
#define SDRATTR_3DSCENE_LIGHTON_1               TypedWhichId<SfxBoolItem>(SDRATTR_3DSCENE_FIRST + 13)    /* 1296 V4+++*/
#define SDRATTR_3DSCENE_LIGHTON_2               TypedWhichId<SfxBoolItem>(SDRATTR_3DSCENE_FIRST + 14)    /* 1297 V4+++*/
#define SDRATTR_3DSCENE_LIGHTON_3               TypedWhichId<SfxBoolItem>(SDRATTR_3DSCENE_FIRST + 15)    /* 1298 V4+++*/
#define SDRATTR_3DSCENE_LIGHTON_4               TypedWhichId<SfxBoolItem>(SDRATTR_3DSCENE_FIRST + 16)    /* 1299 V4+++*/
#define SDRATTR_3DSCENE_LIGHTON_5               TypedWhichId<SfxBoolItem>(SDRATTR_3DSCENE_FIRST + 17)    /* 1300 V4+++*/
#define SDRATTR_3DSCENE_LIGHTON_6               TypedWhichId<SfxBoolItem>(SDRATTR_3DSCENE_FIRST + 18)    /* 1301 V4+++*/
#define SDRATTR_3DSCENE_LIGHTON_7               TypedWhichId<SfxBoolItem>(SDRATTR_3DSCENE_FIRST + 19)    /* 1302 V4+++*/
#define SDRATTR_3DSCENE_LIGHTON_8               TypedWhichId<SfxBoolItem>(SDRATTR_3DSCENE_FIRST + 20)    /* 1303 V4+++*/
#define SDRATTR_3DSCENE_LIGHTDIRECTION_1        TypedWhichId<SvxB3DVectorItem>(SDRATTR_3DSCENE_FIRST + 21)    /* 1304 V4+++*/
#define SDRATTR_3DSCENE_LIGHTDIRECTION_2        TypedWhichId<SvxB3DVectorItem>(SDRATTR_3DSCENE_FIRST + 22)    /* 1305 V4+++*/
#define SDRATTR_3DSCENE_LIGHTDIRECTION_3        TypedWhichId<SvxB3DVectorItem>(SDRATTR_3DSCENE_FIRST + 23)    /* 1306 V4+++*/
#define SDRATTR_3DSCENE_LIGHTDIRECTION_4        TypedWhichId<SvxB3DVectorItem>(SDRATTR_3DSCENE_FIRST + 24)    /* 1307 V4+++*/
#define SDRATTR_3DSCENE_LIGHTDIRECTION_5        TypedWhichId<SvxB3DVectorItem>(SDRATTR_3DSCENE_FIRST + 25)    /* 1308 V4+++*/
#define SDRATTR_3DSCENE_LIGHTDIRECTION_6        TypedWhichId<SvxB3DVectorItem>(SDRATTR_3DSCENE_FIRST + 26)    /* 1309 V4+++*/
#define SDRATTR_3DSCENE_LIGHTDIRECTION_7        TypedWhichId<SvxB3DVectorItem>(SDRATTR_3DSCENE_FIRST + 27)    /* 1310 V4+++*/
#define SDRATTR_3DSCENE_LIGHTDIRECTION_8        TypedWhichId<SvxB3DVectorItem>(SDRATTR_3DSCENE_FIRST + 28)    /* 1311 V4+++*/
#define SDRATTR_3DSCENE_SHADOW_SLANT            TypedWhichId<SfxUInt16Item>(SDRATTR_3DSCENE_FIRST + 29)    /* 1312 V4+++*/
#define SDRATTR_3DSCENE_SHADE_MODE              TypedWhichId<Svx3DShadeModeItem>(SDRATTR_3DSCENE_FIRST + 30)    /* 1313 V4+++*/
#define SDRATTR_3DSCENE_LAST                    (SDRATTR_3DSCENE_SHADE_MODE)    /* 1333 V4+++*/
#define SDRATTR_3D_LAST                         (SDRATTR_3DSCENE_LAST)          /* 1333 V4+++*/

#define SDRATTR_CUSTOMSHAPE_FIRST               (SDRATTR_3D_LAST + 1)           /* 1334 V4+++*/
#define SDRATTR_CUSTOMSHAPE_ENGINE              TypedWhichId<SfxStringItem>(SDRATTR_CUSTOMSHAPE_FIRST + 0) /* 1334 V4+++*/
#define SDRATTR_CUSTOMSHAPE_DATA                TypedWhichId<SfxStringItem>(SDRATTR_CUSTOMSHAPE_FIRST + 1) /* 1335 V4+++*/
#define SDRATTR_CUSTOMSHAPE_GEOMETRY            TypedWhichId<SdrCustomShapeGeometryItem>(SDRATTR_CUSTOMSHAPE_FIRST + 2) /* 1336 V4+++*/
#define SDRATTR_CUSTOMSHAPE_LAST                (SDRATTR_CUSTOMSHAPE_GEOMETRY)   /* 1357 V4+++*/

#define SDRATTR_TABLE_FIRST                     (SDRATTR_CUSTOMSHAPE_LAST+1)
#define SDRATTR_TABLE_BORDER                    TypedWhichId<SvxBoxItem>(SDRATTR_TABLE_FIRST+0)
#define SDRATTR_TABLE_BORDER_INNER              TypedWhichId<SvxBoxInfoItem>(SDRATTR_TABLE_FIRST+1)
#define SDRATTR_TABLE_BORDER_TLBR               TypedWhichId<SvxLineItem>(SDRATTR_TABLE_FIRST+2)
#define SDRATTR_TABLE_BORDER_BLTR               TypedWhichId<SvxLineItem>(SDRATTR_TABLE_FIRST+3)
#define SDRATTR_TABLE_TEXT_ROTATION             TypedWhichId<SvxTextRotateItem>(SDRATTR_TABLE_FIRST+4)

#define SDRATTR_TABLE_LAST                      (SDRATTR_TABLE_TEXT_ROTATION)

#define SDRATTR_END                             SDRATTR_TABLE_LAST      /* 1357 */ /* 1333 V4+++*/ /* 1243 V4+++*/  /*1213*/ /*1085*/ /*1040*/ /*Pool V2: 1123,V1: 1065 */

#endif // INCLUDED_SVX_SVDDEF_HXX

/* vim:set shiftwidth=4 softtabstop=4 expandtab: */
