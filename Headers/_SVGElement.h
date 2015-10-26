#import "NSObject.h"

@class NSSet, NSString, SVGElement;

@interface _SVGElement : NSObject
{
    NSSet *_children;
    NSSet *_linked;
    SVGElement *_parent;
    NSString *_desc;
    NSString *_identifier;
    long long _index;
    NSString *_title;
    NSString *_type;
}

+ (id)attributeNames;
+ (id)relationshipNames;
+ (id)propertyNames;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) SVGElement *parent; // @synthesize parent=_parent;
@property(retain, nonatomic) NSSet *linked; // @synthesize linked=_linked;
@property(retain, nonatomic) NSSet *children; // @synthesize children=_children;
- (void).cxx_destruct;
- (void)primitiveSetParent:(id)arg1;
- (void)primitiveRemoveLinkedObject:(id)arg1;
- (void)primitiveAddLinkedObject:(id)arg1;
- (void)removeLinkedObject:(id)arg1;
- (void)addLinkedObject:(id)arg1;
- (void)primitiveRemoveChildrenObject:(id)arg1;
- (void)primitiveAddChildrenObject:(id)arg1;
- (void)removeChildrenObject:(id)arg1;
- (void)addChildrenObject:(id)arg1;

@end

