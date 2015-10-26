//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class MSLayer, NSArray, NSMutableArray;

@protocol MSLayerContainment
- (BOOL)enumerateLayersWithOptions:(unsigned long long)arg1 classFilter:(Class)arg2 block:(void (^)(id, unsigned long long, char *))arg3;
- (void)enumerateLayers:(void (^)(id))arg1;
- (void)appendToArray:(NSMutableArray *)arg1 layersSatisfyingTest:(BOOL (^)(id))arg2;
- (BOOL)hasLayerSatisfyingTest:(BOOL (^)(id))arg1;
- (MSLayer *)firstLayerSatisfyingTest:(BOOL (^)(id))arg1;
- (NSArray *)layersSatisfyingTest:(BOOL (^)(id))arg1;
- (unsigned long long)indexOfLayer:(id)arg1;
- (id)layerAtIndex:(unsigned long long)arg1;
- (BOOL)containsLayerOfClass:(Class)arg1;
- (BOOL)containsMultipleLayers;
- (BOOL)containsASingleLayer;
- (BOOL)containsLayers;
- (BOOL)containsNoOrOneLayers;
- (BOOL)canBeContainedByDocument;
- (BOOL)canBeContainedByGroup;
- (BOOL)canContainLayer:(MSLayer *)arg1;
- (MSLayer *)lastLayer;
- (MSLayer *)firstLayer;
- (unsigned long long)containedLayersCount;
- (NSArray *)containedLayers;
@end

