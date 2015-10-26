#import "NSView.h"

@class MSContentDrawView, MSDocument, MSRulerData, MSRulerViewLayer, NSNumberFormatter;

@interface MSRulerView : NSView
{
    BOOL didOpenUndoGroup;
    unsigned long long dragIndex;
    double baseOffset;
    double previousBase;
    NSNumberFormatter *metricsFormatter;
    BOOL _mouseDidDrag;
    MSRulerData *_rulerData;
    MSDocument *_document;
    MSContentDrawView *_contentView;
    long long _axis;
    double _temporaryRulerGuide;
    MSRulerViewLayer *_rulerViewLayer;
    struct CGPoint _mouseDownPoint;
}

@property(retain, nonatomic) MSRulerViewLayer *rulerViewLayer; // @synthesize rulerViewLayer=_rulerViewLayer;
@property(nonatomic) double temporaryRulerGuide; // @synthesize temporaryRulerGuide=_temporaryRulerGuide;
@property(nonatomic) long long axis; // @synthesize axis=_axis;
@property(nonatomic) struct CGPoint mouseDownPoint; // @synthesize mouseDownPoint=_mouseDownPoint;
@property(nonatomic) BOOL mouseDidDrag; // @synthesize mouseDidDrag=_mouseDidDrag;
@property(nonatomic) __weak MSContentDrawView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak MSDocument *document; // @synthesize document=_document;
@property(retain, nonatomic) MSRulerData *rulerData; // @synthesize rulerData=_rulerData;
- (void).cxx_destruct;
- (void)endUndo;
- (void)beginUndo;
- (void)dealloc;
- (long long)rulerHeight;
- (long long)rulerLength;
- (double)zoomValue;
- (struct CGPoint)scrollOrigin;
- (id)occupiedRegionForRect:(struct CGRect)arg1 withOffset:(long long)arg2 zoom:(double)arg3;
- (id)bezierPathForLineAtPosition:(double)arg1 inRect:(struct CGRect)arg2;
- (void)drawGuide:(double)arg1 onCanvasInRect:(struct CGRect)arg2;
- (void)drawGuidesOnCanvasInRect:(struct CGRect)arg1;
- (void)setHidden:(BOOL)arg1;
- (double)baseLineIncludingScrollOrigin:(BOOL)arg1;
- (double)baseLine;
- (id)snapLineWithPosition:(double)arg1;
- (struct CGPoint)mouseEventToPoint:(id)arg1;
- (void)refreshGuidesForGrid:(id)arg1;
- (void)refreshAllGuidesInDrawView;
- (void)refreshGuideInDrawViewAtPosition:(double)arg1;
- (void)refreshGuideInDrawViewAtIndex:(unsigned long long)arg1;
- (void)turnAlignmentGuidesBackOn;
- (void)mouseUp:(id)arg1;
- (id)rulerBasedRectForLayer:(id)arg1;
- (double)snapGuideToSelectedLayers:(double)arg1;
- (double)guidePositionForMouse:(struct CGPoint)arg1;
- (void)showAppropriateCursorForMouse:(struct CGPoint)arg1;
- (void)dragSelectedGuideWithMouse:(struct CGPoint)arg1;
- (void)updateSelectedLayerOriginsInInspector;
- (struct CGPoint)distanceFromDragOrigin:(struct CGPoint)arg1;
- (void)dragRulerBaseWithMouse:(struct CGPoint)arg1;
- (void)mouseDraggedAtPoint:(struct CGPoint)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseExited:(id)arg1;
- (unsigned long long)indexOfGuideAtMousePoint:(struct CGPoint)arg1;
- (void)addNewGuideAtMousePoint:(struct CGPoint)arg1;
- (void)mouseDown:(id)arg1;
- (void)setDragCursor;
- (void)setResizeCursor;
- (double)otherAxisForPoint:(struct CGPoint)arg1;
- (double)relevantAxisForPoint:(struct CGPoint)arg1;
- (void)refreshTemporaryRulerGuide;
- (void)mouseMoved:(id)arg1;
- (BOOL)eventInView:(id)arg1;
- (BOOL)acceptsFirstResponder;
- (void)removeGuide:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)guides;
- (struct CGRect)occupiedRegion;
- (void)prepareRulerViewLayer:(struct CGRect)arg1;
- (Class)rulerViewLayerClass;
- (id)makeRulerViewLayer;
- (void)calculateContentsScale;
- (void)windowDidChangeScreen:(id)arg1;
- (void)awakeFromNib;

@end

