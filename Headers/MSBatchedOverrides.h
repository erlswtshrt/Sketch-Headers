//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MSBatchedSymbolMasters, NSArray, NSString;

@interface MSBatchedOverrides : NSObject
{
    // Error parsing type: , name: batchedMasters
    // Error parsing type: , name: overrides
    // Error parsing type: , name: affectedLayerName
    // Error parsing type: , name: enabled
    // Error parsing type: , name: _canOverride
}

- (void).cxx_destruct;
- (id)init;
- (BOOL)setPropertiesForOverride:(id)arg1 atIndex:(long long)arg2;
- (id)initWithBatchedMasters:(id)arg1 overrides:(id)arg2;
@property(nonatomic, readonly) BOOL affectsSingleOverride;
@property(nonatomic) long long canOverrideDescendants;
@property(nonatomic) long long canOverride;
@property(nonatomic) BOOL enabled; // @synthesize enabled;
@property(nonatomic, copy) NSString *affectedLayerName; // @synthesize affectedLayerName;
@property(nonatomic, readonly) NSArray *overrides; // @synthesize overrides;
@property(nonatomic, readonly) MSBatchedSymbolMasters *batchedMasters; // @synthesize batchedMasters;
@property(nonatomic, readonly) NSArray *masters;

@end

