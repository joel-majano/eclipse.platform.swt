/*******************************************************************************
* Copyright (c) 2000, 2003 IBM Corporation and others. All rights reserved.
* The contents of this file are made available under the terms
* of the GNU Lesser General Public License (LGPL) Version 2.1 that
* accompanies this distribution (lgpl-v21.txt).  The LGPL is also
* available at http://www.gnu.org/licenses/lgpl.html.  If the version
* of the LGPL at http://www.gnu.org is different to the version of
* the LGPL accompanying this distribution and there is any conflict
* between the two license versions, the terms of the LGPL accompanying
* this distribution shall govern.
* 
* Contributors:
*     IBM Corporation - initial API and implementation
*******************************************************************************/

#include "os.h"

#ifndef NO_GdkColor
void cacheGdkColorFields(JNIEnv *env, jobject lpObject);
GdkColor *getGdkColorFields(JNIEnv *env, jobject lpObject, GdkColor *lpStruct);
void setGdkColorFields(JNIEnv *env, jobject lpObject, GdkColor *lpStruct);
#define GdkColor_sizeof() sizeof(GdkColor)
#else
#define cacheGdkColorFields(a,b)
#define getGdkColorFields(a,b,c) NULL
#define setGdkColorFields(a,b,c)
#define GdkColor_sizeof() 0
#endif

#ifndef NO_GdkDragContext
void cacheGdkDragContextFields(JNIEnv *env, jobject lpObject);
GdkDragContext *getGdkDragContextFields(JNIEnv *env, jobject lpObject, GdkDragContext *lpStruct);
void setGdkDragContextFields(JNIEnv *env, jobject lpObject, GdkDragContext *lpStruct);
#define GdkDragContext_sizeof() sizeof(GdkDragContext)
#else
#define cacheGdkDragContextFields(a,b)
#define getGdkDragContextFields(a,b,c) NULL
#define setGdkDragContextFields(a,b,c)
#define GdkDragContext_sizeof() 0
#endif

#ifndef NO_GdkEvent
void cacheGdkEventFields(JNIEnv *env, jobject lpObject);
GdkEvent *getGdkEventFields(JNIEnv *env, jobject lpObject, GdkEvent *lpStruct);
void setGdkEventFields(JNIEnv *env, jobject lpObject, GdkEvent *lpStruct);
#define GdkEvent_sizeof() sizeof(GdkEvent)
#else
#define cacheGdkEventFields(a,b)
#define getGdkEventFields(a,b,c) NULL
#define setGdkEventFields(a,b,c)
#define GdkEvent_sizeof() 0
#endif

#ifndef NO_GdkEventButton
void cacheGdkEventButtonFields(JNIEnv *env, jobject lpObject);
GdkEventButton *getGdkEventButtonFields(JNIEnv *env, jobject lpObject, GdkEventButton *lpStruct);
void setGdkEventButtonFields(JNIEnv *env, jobject lpObject, GdkEventButton *lpStruct);
#define GdkEventButton_sizeof() sizeof(GdkEventButton)
#else
#define cacheGdkEventButtonFields(a,b)
#define getGdkEventButtonFields(a,b,c) NULL
#define setGdkEventButtonFields(a,b,c)
#define GdkEventButton_sizeof() 0
#endif

#ifndef NO_GdkEventCrossing
void cacheGdkEventCrossingFields(JNIEnv *env, jobject lpObject);
GdkEventCrossing *getGdkEventCrossingFields(JNIEnv *env, jobject lpObject, GdkEventCrossing *lpStruct);
void setGdkEventCrossingFields(JNIEnv *env, jobject lpObject, GdkEventCrossing *lpStruct);
#define GdkEventCrossing_sizeof() sizeof(GdkEventCrossing)
#else
#define cacheGdkEventCrossingFields(a,b)
#define getGdkEventCrossingFields(a,b,c) NULL
#define setGdkEventCrossingFields(a,b,c)
#define GdkEventCrossing_sizeof() 0
#endif

#ifndef NO_GdkEventExpose
void cacheGdkEventExposeFields(JNIEnv *env, jobject lpObject);
GdkEventExpose *getGdkEventExposeFields(JNIEnv *env, jobject lpObject, GdkEventExpose *lpStruct);
void setGdkEventExposeFields(JNIEnv *env, jobject lpObject, GdkEventExpose *lpStruct);
#define GdkEventExpose_sizeof() sizeof(GdkEventExpose)
#else
#define cacheGdkEventExposeFields(a,b)
#define getGdkEventExposeFields(a,b,c) NULL
#define setGdkEventExposeFields(a,b,c)
#define GdkEventExpose_sizeof() 0
#endif

#ifndef NO_GdkEventFocus
void cacheGdkEventFocusFields(JNIEnv *env, jobject lpObject);
GdkEventFocus *getGdkEventFocusFields(JNIEnv *env, jobject lpObject, GdkEventFocus *lpStruct);
void setGdkEventFocusFields(JNIEnv *env, jobject lpObject, GdkEventFocus *lpStruct);
#define GdkEventFocus_sizeof() sizeof(GdkEventFocus)
#else
#define cacheGdkEventFocusFields(a,b)
#define getGdkEventFocusFields(a,b,c) NULL
#define setGdkEventFocusFields(a,b,c)
#define GdkEventFocus_sizeof() 0
#endif

#ifndef NO_GdkEventKey
void cacheGdkEventKeyFields(JNIEnv *env, jobject lpObject);
GdkEventKey *getGdkEventKeyFields(JNIEnv *env, jobject lpObject, GdkEventKey *lpStruct);
void setGdkEventKeyFields(JNIEnv *env, jobject lpObject, GdkEventKey *lpStruct);
#define GdkEventKey_sizeof() sizeof(GdkEventKey)
#else
#define cacheGdkEventKeyFields(a,b)
#define getGdkEventKeyFields(a,b,c) NULL
#define setGdkEventKeyFields(a,b,c)
#define GdkEventKey_sizeof() 0
#endif

#ifndef NO_GdkEventVisibility
void cacheGdkEventVisibilityFields(JNIEnv *env, jobject lpObject);
GdkEventVisibility *getGdkEventVisibilityFields(JNIEnv *env, jobject lpObject, GdkEventVisibility *lpStruct);
void setGdkEventVisibilityFields(JNIEnv *env, jobject lpObject, GdkEventVisibility *lpStruct);
#define GdkEventVisibility_sizeof() sizeof(GdkEventVisibility)
#else
#define cacheGdkEventVisibilityFields(a,b)
#define getGdkEventVisibilityFields(a,b,c) NULL
#define setGdkEventVisibilityFields(a,b,c)
#define GdkEventVisibility_sizeof() 0
#endif

#ifndef NO_GdkEventWindowState
void cacheGdkEventWindowStateFields(JNIEnv *env, jobject lpObject);
GdkEventWindowState *getGdkEventWindowStateFields(JNIEnv *env, jobject lpObject, GdkEventWindowState *lpStruct);
void setGdkEventWindowStateFields(JNIEnv *env, jobject lpObject, GdkEventWindowState *lpStruct);
#define GdkEventWindowState_sizeof() sizeof(GdkEventWindowState)
#else
#define cacheGdkEventWindowStateFields(a,b)
#define getGdkEventWindowStateFields(a,b,c) NULL
#define setGdkEventWindowStateFields(a,b,c)
#define GdkEventWindowState_sizeof() 0
#endif

#ifndef NO_GdkGCValues
void cacheGdkGCValuesFields(JNIEnv *env, jobject lpObject);
GdkGCValues *getGdkGCValuesFields(JNIEnv *env, jobject lpObject, GdkGCValues *lpStruct);
void setGdkGCValuesFields(JNIEnv *env, jobject lpObject, GdkGCValues *lpStruct);
#define GdkGCValues_sizeof() sizeof(GdkGCValues)
#else
#define cacheGdkGCValuesFields(a,b)
#define getGdkGCValuesFields(a,b,c) NULL
#define setGdkGCValuesFields(a,b,c)
#define GdkGCValues_sizeof() 0
#endif

#ifndef NO_GdkImage
void cacheGdkImageFields(JNIEnv *env, jobject lpObject);
GdkImage *getGdkImageFields(JNIEnv *env, jobject lpObject, GdkImage *lpStruct);
void setGdkImageFields(JNIEnv *env, jobject lpObject, GdkImage *lpStruct);
#define GdkImage_sizeof() sizeof(GdkImage)
#else
#define cacheGdkImageFields(a,b)
#define getGdkImageFields(a,b,c) NULL
#define setGdkImageFields(a,b,c)
#define GdkImage_sizeof() 0
#endif

#ifndef NO_GdkRectangle
void cacheGdkRectangleFields(JNIEnv *env, jobject lpObject);
GdkRectangle *getGdkRectangleFields(JNIEnv *env, jobject lpObject, GdkRectangle *lpStruct);
void setGdkRectangleFields(JNIEnv *env, jobject lpObject, GdkRectangle *lpStruct);
#define GdkRectangle_sizeof() sizeof(GdkRectangle)
#else
#define cacheGdkRectangleFields(a,b)
#define getGdkRectangleFields(a,b,c) NULL
#define setGdkRectangleFields(a,b,c)
#define GdkRectangle_sizeof() 0
#endif

#ifndef NO_GdkVisual
void cacheGdkVisualFields(JNIEnv *env, jobject lpObject);
GdkVisual *getGdkVisualFields(JNIEnv *env, jobject lpObject, GdkVisual *lpStruct);
void setGdkVisualFields(JNIEnv *env, jobject lpObject, GdkVisual *lpStruct);
#define GdkVisual_sizeof() sizeof(GdkVisual)
#else
#define cacheGdkVisualFields(a,b)
#define getGdkVisualFields(a,b,c) NULL
#define setGdkVisualFields(a,b,c)
#define GdkVisual_sizeof() 0
#endif

#ifndef NO_GdkWindowAttr
void cacheGdkWindowAttrFields(JNIEnv *env, jobject lpObject);
GdkWindowAttr *getGdkWindowAttrFields(JNIEnv *env, jobject lpObject, GdkWindowAttr *lpStruct);
void setGdkWindowAttrFields(JNIEnv *env, jobject lpObject, GdkWindowAttr *lpStruct);
#define GdkWindowAttr_sizeof() sizeof(GdkWindowAttr)
#else
#define cacheGdkWindowAttrFields(a,b)
#define getGdkWindowAttrFields(a,b,c) NULL
#define setGdkWindowAttrFields(a,b,c)
#define GdkWindowAttr_sizeof() 0
#endif

#ifndef NO_GtkAdjustment
void cacheGtkAdjustmentFields(JNIEnv *env, jobject lpObject);
GtkAdjustment *getGtkAdjustmentFields(JNIEnv *env, jobject lpObject, GtkAdjustment *lpStruct);
void setGtkAdjustmentFields(JNIEnv *env, jobject lpObject, GtkAdjustment *lpStruct);
#define GtkAdjustment_sizeof() sizeof(GtkAdjustment)
#else
#define cacheGtkAdjustmentFields(a,b)
#define getGtkAdjustmentFields(a,b,c) NULL
#define setGtkAdjustmentFields(a,b,c)
#define GtkAdjustment_sizeof() 0
#endif

#ifndef NO_GtkAllocation
void cacheGtkAllocationFields(JNIEnv *env, jobject lpObject);
GtkAllocation *getGtkAllocationFields(JNIEnv *env, jobject lpObject, GtkAllocation *lpStruct);
void setGtkAllocationFields(JNIEnv *env, jobject lpObject, GtkAllocation *lpStruct);
#define GtkAllocation_sizeof() sizeof(GtkAllocation)
#else
#define cacheGtkAllocationFields(a,b)
#define getGtkAllocationFields(a,b,c) NULL
#define setGtkAllocationFields(a,b,c)
#define GtkAllocation_sizeof() 0
#endif

#ifndef NO_GtkColorSelectionDialog
void cacheGtkColorSelectionDialogFields(JNIEnv *env, jobject lpObject);
GtkColorSelectionDialog *getGtkColorSelectionDialogFields(JNIEnv *env, jobject lpObject, GtkColorSelectionDialog *lpStruct);
void setGtkColorSelectionDialogFields(JNIEnv *env, jobject lpObject, GtkColorSelectionDialog *lpStruct);
#define GtkColorSelectionDialog_sizeof() sizeof(GtkColorSelectionDialog)
#else
#define cacheGtkColorSelectionDialogFields(a,b)
#define getGtkColorSelectionDialogFields(a,b,c) NULL
#define setGtkColorSelectionDialogFields(a,b,c)
#define GtkColorSelectionDialog_sizeof() 0
#endif

#ifndef NO_GtkCombo
void cacheGtkComboFields(JNIEnv *env, jobject lpObject);
GtkCombo *getGtkComboFields(JNIEnv *env, jobject lpObject, GtkCombo *lpStruct);
void setGtkComboFields(JNIEnv *env, jobject lpObject, GtkCombo *lpStruct);
#define GtkCombo_sizeof() sizeof(GtkCombo)
#else
#define cacheGtkComboFields(a,b)
#define getGtkComboFields(a,b,c) NULL
#define setGtkComboFields(a,b,c)
#define GtkCombo_sizeof() 0
#endif

#ifndef NO_GtkFileSelection
void cacheGtkFileSelectionFields(JNIEnv *env, jobject lpObject);
GtkFileSelection *getGtkFileSelectionFields(JNIEnv *env, jobject lpObject, GtkFileSelection *lpStruct);
void setGtkFileSelectionFields(JNIEnv *env, jobject lpObject, GtkFileSelection *lpStruct);
#define GtkFileSelection_sizeof() sizeof(GtkFileSelection)
#else
#define cacheGtkFileSelectionFields(a,b)
#define getGtkFileSelectionFields(a,b,c) NULL
#define setGtkFileSelectionFields(a,b,c)
#define GtkFileSelection_sizeof() 0
#endif

#ifndef NO_GtkFixed
void cacheGtkFixedFields(JNIEnv *env, jobject lpObject);
GtkFixed *getGtkFixedFields(JNIEnv *env, jobject lpObject, GtkFixed *lpStruct);
void setGtkFixedFields(JNIEnv *env, jobject lpObject, GtkFixed *lpStruct);
#define GtkFixed_sizeof() sizeof(GtkFixed)
#else
#define cacheGtkFixedFields(a,b)
#define getGtkFixedFields(a,b,c) NULL
#define setGtkFixedFields(a,b,c)
#define GtkFixed_sizeof() 0
#endif

#ifndef NO_GtkRequisition
void cacheGtkRequisitionFields(JNIEnv *env, jobject lpObject);
GtkRequisition *getGtkRequisitionFields(JNIEnv *env, jobject lpObject, GtkRequisition *lpStruct);
void setGtkRequisitionFields(JNIEnv *env, jobject lpObject, GtkRequisition *lpStruct);
#define GtkRequisition_sizeof() sizeof(GtkRequisition)
#else
#define cacheGtkRequisitionFields(a,b)
#define getGtkRequisitionFields(a,b,c) NULL
#define setGtkRequisitionFields(a,b,c)
#define GtkRequisition_sizeof() 0
#endif

#ifndef NO_GtkSelectionData
void cacheGtkSelectionDataFields(JNIEnv *env, jobject lpObject);
GtkSelectionData *getGtkSelectionDataFields(JNIEnv *env, jobject lpObject, GtkSelectionData *lpStruct);
void setGtkSelectionDataFields(JNIEnv *env, jobject lpObject, GtkSelectionData *lpStruct);
#define GtkSelectionData_sizeof() sizeof(GtkSelectionData)
#else
#define cacheGtkSelectionDataFields(a,b)
#define getGtkSelectionDataFields(a,b,c) NULL
#define setGtkSelectionDataFields(a,b,c)
#define GtkSelectionData_sizeof() 0
#endif

#ifndef NO_GtkTargetEntry
void cacheGtkTargetEntryFields(JNIEnv *env, jobject lpObject);
GtkTargetEntry *getGtkTargetEntryFields(JNIEnv *env, jobject lpObject, GtkTargetEntry *lpStruct);
void setGtkTargetEntryFields(JNIEnv *env, jobject lpObject, GtkTargetEntry *lpStruct);
#define GtkTargetEntry_sizeof() sizeof(GtkTargetEntry)
#else
#define cacheGtkTargetEntryFields(a,b)
#define getGtkTargetEntryFields(a,b,c) NULL
#define setGtkTargetEntryFields(a,b,c)
#define GtkTargetEntry_sizeof() 0
#endif

#ifndef NO_GtkTargetPair
void cacheGtkTargetPairFields(JNIEnv *env, jobject lpObject);
GtkTargetPair *getGtkTargetPairFields(JNIEnv *env, jobject lpObject, GtkTargetPair *lpStruct);
void setGtkTargetPairFields(JNIEnv *env, jobject lpObject, GtkTargetPair *lpStruct);
#define GtkTargetPair_sizeof() sizeof(GtkTargetPair)
#else
#define cacheGtkTargetPairFields(a,b)
#define getGtkTargetPairFields(a,b,c) NULL
#define setGtkTargetPairFields(a,b,c)
#define GtkTargetPair_sizeof() 0
#endif

#ifndef NO_PangoAttribute
void cachePangoAttributeFields(JNIEnv *env, jobject lpObject);
PangoAttribute *getPangoAttributeFields(JNIEnv *env, jobject lpObject, PangoAttribute *lpStruct);
void setPangoAttributeFields(JNIEnv *env, jobject lpObject, PangoAttribute *lpStruct);
#define PangoAttribute_sizeof() sizeof(PangoAttribute)
#else
#define cachePangoAttributeFields(a,b)
#define getPangoAttributeFields(a,b,c) NULL
#define setPangoAttributeFields(a,b,c)
#define PangoAttribute_sizeof() 0
#endif

#ifndef NO_PangoItem
void cachePangoItemFields(JNIEnv *env, jobject lpObject);
PangoItem *getPangoItemFields(JNIEnv *env, jobject lpObject, PangoItem *lpStruct);
void setPangoItemFields(JNIEnv *env, jobject lpObject, PangoItem *lpStruct);
#define PangoItem_sizeof() sizeof(PangoItem)
#else
#define cachePangoItemFields(a,b)
#define getPangoItemFields(a,b,c) NULL
#define setPangoItemFields(a,b,c)
#define PangoItem_sizeof() 0
#endif

#ifndef NO_PangoLayoutLine
void cachePangoLayoutLineFields(JNIEnv *env, jobject lpObject);
PangoLayoutLine *getPangoLayoutLineFields(JNIEnv *env, jobject lpObject, PangoLayoutLine *lpStruct);
void setPangoLayoutLineFields(JNIEnv *env, jobject lpObject, PangoLayoutLine *lpStruct);
#define PangoLayoutLine_sizeof() sizeof(PangoLayoutLine)
#else
#define cachePangoLayoutLineFields(a,b)
#define getPangoLayoutLineFields(a,b,c) NULL
#define setPangoLayoutLineFields(a,b,c)
#define PangoLayoutLine_sizeof() 0
#endif

#ifndef NO_PangoLayoutRun
void cachePangoLayoutRunFields(JNIEnv *env, jobject lpObject);
PangoLayoutRun *getPangoLayoutRunFields(JNIEnv *env, jobject lpObject, PangoLayoutRun *lpStruct);
void setPangoLayoutRunFields(JNIEnv *env, jobject lpObject, PangoLayoutRun *lpStruct);
#define PangoLayoutRun_sizeof() sizeof(PangoLayoutRun)
#else
#define cachePangoLayoutRunFields(a,b)
#define getPangoLayoutRunFields(a,b,c) NULL
#define setPangoLayoutRunFields(a,b,c)
#define PangoLayoutRun_sizeof() 0
#endif

#ifndef NO_PangoLogAttr
void cachePangoLogAttrFields(JNIEnv *env, jobject lpObject);
PangoLogAttr *getPangoLogAttrFields(JNIEnv *env, jobject lpObject, PangoLogAttr *lpStruct);
void setPangoLogAttrFields(JNIEnv *env, jobject lpObject, PangoLogAttr *lpStruct);
#define PangoLogAttr_sizeof() sizeof(PangoLogAttr)
#else
#define cachePangoLogAttrFields(a,b)
#define getPangoLogAttrFields(a,b,c) NULL
#define setPangoLogAttrFields(a,b,c)
#define PangoLogAttr_sizeof() 0
#endif

#ifndef NO_PangoRectangle
void cachePangoRectangleFields(JNIEnv *env, jobject lpObject);
PangoRectangle *getPangoRectangleFields(JNIEnv *env, jobject lpObject, PangoRectangle *lpStruct);
void setPangoRectangleFields(JNIEnv *env, jobject lpObject, PangoRectangle *lpStruct);
#define PangoRectangle_sizeof() sizeof(PangoRectangle)
#else
#define cachePangoRectangleFields(a,b)
#define getPangoRectangleFields(a,b,c) NULL
#define setPangoRectangleFields(a,b,c)
#define PangoRectangle_sizeof() 0
#endif

#ifndef NO_XAnyEvent
void cacheXAnyEventFields(JNIEnv *env, jobject lpObject);
XAnyEvent *getXAnyEventFields(JNIEnv *env, jobject lpObject, XAnyEvent *lpStruct);
void setXAnyEventFields(JNIEnv *env, jobject lpObject, XAnyEvent *lpStruct);
#define XAnyEvent_sizeof() sizeof(XAnyEvent)
#else
#define cacheXAnyEventFields(a,b)
#define getXAnyEventFields(a,b,c) NULL
#define setXAnyEventFields(a,b,c)
#define XAnyEvent_sizeof() 0
#endif

#ifndef NO_XClientMessageEvent
void cacheXClientMessageEventFields(JNIEnv *env, jobject lpObject);
XClientMessageEvent *getXClientMessageEventFields(JNIEnv *env, jobject lpObject, XClientMessageEvent *lpStruct);
void setXClientMessageEventFields(JNIEnv *env, jobject lpObject, XClientMessageEvent *lpStruct);
#define XClientMessageEvent_sizeof() sizeof(XClientMessageEvent)
#else
#define cacheXClientMessageEventFields(a,b)
#define getXClientMessageEventFields(a,b,c) NULL
#define setXClientMessageEventFields(a,b,c)
#define XClientMessageEvent_sizeof() 0
#endif

#ifndef NO_XEvent
void cacheXEventFields(JNIEnv *env, jobject lpObject);
XEvent *getXEventFields(JNIEnv *env, jobject lpObject, XEvent *lpStruct);
void setXEventFields(JNIEnv *env, jobject lpObject, XEvent *lpStruct);
#define XEvent_sizeof() sizeof(XEvent)
#else
#define cacheXEventFields(a,b)
#define getXEventFields(a,b,c) NULL
#define setXEventFields(a,b,c)
#define XEvent_sizeof() 0
#endif

#ifndef NO_XExposeEvent
void cacheXExposeEventFields(JNIEnv *env, jobject lpObject);
XExposeEvent *getXExposeEventFields(JNIEnv *env, jobject lpObject, XExposeEvent *lpStruct);
void setXExposeEventFields(JNIEnv *env, jobject lpObject, XExposeEvent *lpStruct);
#define XExposeEvent_sizeof() sizeof(XExposeEvent)
#else
#define cacheXExposeEventFields(a,b)
#define getXExposeEventFields(a,b,c) NULL
#define setXExposeEventFields(a,b,c)
#define XExposeEvent_sizeof() 0
#endif

#ifndef NO_XFocusChangeEvent
void cacheXFocusChangeEventFields(JNIEnv *env, jobject lpObject);
XFocusChangeEvent *getXFocusChangeEventFields(JNIEnv *env, jobject lpObject, XFocusChangeEvent *lpStruct);
void setXFocusChangeEventFields(JNIEnv *env, jobject lpObject, XFocusChangeEvent *lpStruct);
#define XFocusChangeEvent_sizeof() sizeof(XFocusChangeEvent)
#else
#define cacheXFocusChangeEventFields(a,b)
#define getXFocusChangeEventFields(a,b,c) NULL
#define setXFocusChangeEventFields(a,b,c)
#define XFocusChangeEvent_sizeof() 0
#endif

#ifndef NO_XVisibilityEvent
void cacheXVisibilityEventFields(JNIEnv *env, jobject lpObject);
XVisibilityEvent *getXVisibilityEventFields(JNIEnv *env, jobject lpObject, XVisibilityEvent *lpStruct);
void setXVisibilityEventFields(JNIEnv *env, jobject lpObject, XVisibilityEvent *lpStruct);
#define XVisibilityEvent_sizeof() sizeof(XVisibilityEvent)
#else
#define cacheXVisibilityEventFields(a,b)
#define getXVisibilityEventFields(a,b,c) NULL
#define setXVisibilityEventFields(a,b,c)
#define XVisibilityEvent_sizeof() 0
#endif

#ifndef NO_XWindowChanges
void cacheXWindowChangesFields(JNIEnv *env, jobject lpObject);
XWindowChanges *getXWindowChangesFields(JNIEnv *env, jobject lpObject, XWindowChanges *lpStruct);
void setXWindowChangesFields(JNIEnv *env, jobject lpObject, XWindowChanges *lpStruct);
#define XWindowChanges_sizeof() sizeof(XWindowChanges)
#else
#define cacheXWindowChangesFields(a,b)
#define getXWindowChangesFields(a,b,c) NULL
#define setXWindowChangesFields(a,b,c)
#define XWindowChanges_sizeof() 0
#endif

