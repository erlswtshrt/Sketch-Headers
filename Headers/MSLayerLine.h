//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MSLayer;

@interface MSLayerLine : NSObject
{
    MSLayer *_layer;
    unsigned long long _axis;
    unsigned long long _position;
    MSLayerLine *_previousLayerLine;
    double _proposedOffset;
}

@property(nonatomic) double proposedOffset; // @synthesize proposedOffset=_proposedOffset;
@property(retain, nonatomic) MSLayerLine *previousLayerLine; // @synthesize previousLayerLine=_previousLayerLine;
@property(nonatomic) unsigned long long position; // @synthesize position=_position;
@property(nonatomic) unsigned long long axis; // @synthesize axis=_axis;
@property(retain, nonatomic) MSLayer *layer; // @synthesize layer=_layer;
- (void).cxx_destruct;
- (void)commitProposedOffset;
- (long long)compare:(id)arg1;
@property(readonly, nonatomic) double value;
- (id)initWithPosition:(unsigned long long)arg1 onAxis:(unsigned long long)arg2 forLayer:(id)arg3;

@end
