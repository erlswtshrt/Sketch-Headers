#import "NSObject.h"

@class MSSelectionPath, MSSelectionPathCollection, MSShapePathLayer;

@interface MSEditingShapeDrawing : NSObject
{
    BOOL _shouldSkipDrawingSelection;
    MSShapePathLayer *_shape;
    MSSelectionPathCollection *_selectedPoints;
    MSSelectionPath *_hoveringPoint;
    double _zoomValue;
    long long _hoveringBeforeIndex;
    MSSelectionPathCollection *_snappedPaths;
    struct CGPoint _scrollOrigin;
    struct CGRect _dirtyRect;
}

@property(retain, nonatomic) MSSelectionPathCollection *snappedPaths; // @synthesize snappedPaths=_snappedPaths;
@property(nonatomic) BOOL shouldSkipDrawingSelection; // @synthesize shouldSkipDrawingSelection=_shouldSkipDrawingSelection;
@property(nonatomic) long long hoveringBeforeIndex; // @synthesize hoveringBeforeIndex=_hoveringBeforeIndex;
@property(nonatomic) double zoomValue; // @synthesize zoomValue=_zoomValue;
@property(nonatomic) struct CGPoint scrollOrigin; // @synthesize scrollOrigin=_scrollOrigin;
@property(nonatomic) struct CGRect dirtyRect; // @synthesize dirtyRect=_dirtyRect;
@property(retain, nonatomic) MSSelectionPath *hoveringPoint; // @synthesize hoveringPoint=_hoveringPoint;
@property(retain, nonatomic) MSSelectionPathCollection *selectedPoints; // @synthesize selectedPoints=_selectedPoints;
@property(retain, nonatomic) MSShapePathLayer *shape; // @synthesize shape=_shape;
- (void).cxx_destruct;
- (void)drawLineFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2 inFrame:(struct CGRect)arg3;
- (void)drawOutlinePointAtSelectionPath:(id)arg1 isSelected:(BOOL)arg2 selectionCount:(long long)arg3 transformStruct:(struct _CHTransformStruct)arg4;
- (void)drawOutlinePoints;
- (void)drawBetweenPoints;
- (void)draw;
- (id)init;

@end

