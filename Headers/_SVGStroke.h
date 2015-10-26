#import "SVGElement.h"

@class NSArray, NSSet, SVGColor, SVGGradient;

@interface _SVGStroke : SVGElement
{
    SVGGradient *_gradient;
    NSSet *_usedBy;
    SVGColor *_color;
    NSArray *_dashes;
    double _width;
}

+ (id)attributeNames;
+ (id)relationshipNames;
+ (id)propertyNames;
@property(nonatomic) double width; // @synthesize width=_width;
@property(retain, nonatomic) NSArray *dashes; // @synthesize dashes=_dashes;
@property(retain, nonatomic) SVGColor *color; // @synthesize color=_color;
@property(retain, nonatomic) NSSet *usedBy; // @synthesize usedBy=_usedBy;
@property(retain, nonatomic) SVGGradient *gradient; // @synthesize gradient=_gradient;
- (void).cxx_destruct;
- (void)primitiveRemoveUsedByObject:(id)arg1;
- (void)primitiveAddUsedByObject:(id)arg1;
- (void)removeUsedByObject:(id)arg1;
- (void)addUsedByObject:(id)arg1;
- (void)primitiveSetGradient:(id)arg1;

@end

