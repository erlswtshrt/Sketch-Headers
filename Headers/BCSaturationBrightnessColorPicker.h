#import "BCColorPickerBaseView.h"

@interface BCSaturationBrightnessColorPicker : BCColorPickerBaseView
{
    struct CGPoint _originalPoint;
    double _hue;
    double _saturation;
    double _brightness;
}

@property(nonatomic) double brightness; // @synthesize brightness=_brightness;
@property(nonatomic) double saturation; // @synthesize saturation=_saturation;
@property(nonatomic) double hue; // @synthesize hue=_hue;
- (void)dealloc;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (struct CGRect)pickerRect;
- (void)drawContentInRect:(struct CGRect)arg1 dirtyRect:(struct CGRect)arg2;
- (id)initInBounds:(struct CGRect)arg1;

@end

