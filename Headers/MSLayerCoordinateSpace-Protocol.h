//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@protocol MSLayerCoordinateSpace;

@protocol MSLayerCoordinateSpace
@property(readonly, nonatomic) struct CGAffineTransform transformForConvertingFromParentCoordinateSpace;
@property(readonly, nonatomic) struct CGAffineTransform transformForConvertingToParentCoordinateSpace;
@property(readonly, nonatomic) id <MSLayerCoordinateSpace> parentCoordinateSpace;
@property(readonly, nonatomic) struct CGRect bounds;
- (struct CGAffineTransform)transformForConvertingFromCoordinateSpace:(id <MSLayerCoordinateSpace>)arg1;
- (struct CGAffineTransform)transformForConvertingToCoordinateSpace:(id <MSLayerCoordinateSpace>)arg1;
- (struct CGVector)convertVector:(struct CGVector)arg1 fromCoordinateSpace:(id <MSLayerCoordinateSpace>)arg2;
- (struct CGVector)convertVector:(struct CGVector)arg1 toCoordinateSpace:(id <MSLayerCoordinateSpace>)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromCoordinateSpace:(id <MSLayerCoordinateSpace>)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 toCoordinateSpace:(id <MSLayerCoordinateSpace>)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromCoordinateSpace:(id <MSLayerCoordinateSpace>)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toCoordinateSpace:(id <MSLayerCoordinateSpace>)arg2;
@end
