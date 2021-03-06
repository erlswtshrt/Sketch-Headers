//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DKDistortionTransform : NSObject
{
    struct CGPoint m_q[4];
    BOOL m_inverted;
}

+ (id)transformWithInitialRect:(struct CGRect)arg1;
- (id)transformPath:(id)arg1 inRect:(struct CGRect)arg2;
- (struct CGPoint)transformPoint:(struct CGPoint)arg1 fromRect:(struct CGRect)arg2;
- (void)invert;
- (void)differentialPerspectiveBy:(double)arg1;
- (void)shearVerticallyBy:(double)arg1;
- (void)shearHorizontallyBy:(double)arg1;
- (void)offsetByX:(double)arg1 byY:(double)arg2;
- (struct CGRect)bounds;
- (void)getEnvelopePoints:(struct CGPoint *)arg1;
- (void)setEnvelopePoints:(struct CGPoint *)arg1;
- (id)initWithEnvelope:(struct CGPoint *)arg1;
- (id)initWithRect:(struct CGRect)arg1;

@end

