//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _TtC6Sketch18MSScrollRecognizer : NSObject
{
    // Error parsing type: , name: target
    // Error parsing type: , name: action
    // Error parsing type: , name: threshold
    // Error parsing type: , name: multiplier
    // Error parsing type: , name: delta
}

- (void).cxx_destruct;
- (id)init;
- (void)scrollWheel:(id)arg1;
@property(nonatomic) struct CGVector delta; // @synthesize delta;
@property(nonatomic) SEL action; // @synthesize action;
@property(nonatomic) __weak id target; // @synthesize target;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

