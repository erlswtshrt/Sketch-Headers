#import "BCColorPickerBaseView.h"

@class MSGradient;

@interface MSGradientBarView : BCColorPickerBaseView
{
    id <MSGradientBarViewDelegate> _delegate;
    MSGradient *_gradient;
    unsigned long long _selectedStopIndex;
}

@property(nonatomic) unsigned long long selectedStopIndex; // @synthesize selectedStopIndex=_selectedStopIndex;
@property(retain, nonatomic) MSGradient *gradient; // @synthesize gradient=_gradient;
@property(nonatomic) __weak id <MSGradientBarViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)acceptsFirstResponder;
- (BOOL)canBecomeKeyView;
- (BOOL)canDoAdvancedGradientStopModifications;
- (void)centerStopBetween;
- (void)setSelectedStopToPercentage:(long long)arg1;
- (void)insertText:(id)arg1;
- (id)previousStop;
- (id)nextStop;
- (id)selectedStop;
- (void)moveSelectedStopBy:(double)arg1;
- (void)moveDown:(id)arg1;
- (void)moveUp:(id)arg1;
- (void)moveRightAndModifySelection:(id)arg1;
- (void)moveRight:(id)arg1;
- (void)moveLeftAndModifySelection:(id)arg1;
- (void)moveLeft:(id)arg1;
- (void)deleteBackward:(id)arg1;
- (void)deleteForward:(id)arg1;
- (void)insertBacktab:(id)arg1;
- (void)insertTab:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)drawSelectedMarkerInRect:(struct CGRect)arg1 color:(id)arg2;
- (void)drawContentInRect:(struct CGRect)arg1 dirtyRect:(struct CGRect)arg2;
- (double)stopPositionForEvent:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (unsigned long long)stopIndexForEvent:(id)arg1;
- (void)mouseDown:(id)arg1;
- (struct CGRect)normaliseRect:(struct CGRect)arg1;
- (struct CGRect)rectForMarkerAtIndex:(unsigned long long)arg1;
- (void)awakeFromNib;

@end

