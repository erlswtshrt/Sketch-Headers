//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SketchModel/_MSImmutableSliceLayer.h>

#import <SketchModel/MSLayerWithBackgroundColor-Protocol.h>

@class NSString;

@interface MSImmutableSliceLayer : _MSImmutableSliceLayer <MSLayerWithBackgroundColor>
{
}

+ (id)defaultName;
+ (unsigned long long)traits;
- (void)migratePropertiesFromV119OrEarlierWithUnarchiver:(id)arg1;
- (struct CGRect)absoluteInfluenceRectForAncestorGroups:(id)arg1 document:(id)arg2;
- (id)immutableBackgroundColor;
- (BOOL)shouldBeIncludedInParentPath;
- (BOOL)isLayerExportable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) BOOL hasBackgroundColor;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

