//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface MSRenderingCache : NSObject
{
    NSMutableDictionary *_cache;
    NSMutableDictionary *_keysToTraits;
}

- (void).cxx_destruct;
- (void)removeObjectsWithTraits:(unsigned long long)arg1;
- (id)objectForKey:(id)arg1 orCreateWithBlock:(CDUnknownBlockType)arg2 addToCacheWithTraits:(unsigned long long)arg3;
- (id)objectForKey:(id)arg1;
- (void)cacheObject:(id)arg1 forKey:(id)arg2 traits:(unsigned long long)arg3;
- (id)init;

@end

