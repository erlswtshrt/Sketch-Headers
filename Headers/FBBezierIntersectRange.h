#import "NSObject.h"

@class FBBezierCurve, FBBezierIntersection;

@interface FBBezierIntersectRange : NSObject
{
    FBBezierCurve *_curve1LeftBezier;
    FBBezierCurve *_curve1MiddleBezier;
    FBBezierCurve *_curve1RightBezier;
    BOOL _needToComputeCurve1;
    FBBezierCurve *_curve2LeftBezier;
    FBBezierCurve *_curve2MiddleBezier;
    FBBezierCurve *_curve2RightBezier;
    BOOL _needToComputeCurve2;
    BOOL _reversed;
    FBBezierCurve *_curve1;
    FBBezierCurve *_curve2;
    struct FBRange _parameterRange1;
    struct FBRange _parameterRange2;
}

+ (id)intersectRangeWithCurve1:(id)arg1 parameterRange1:(struct FBRange)arg2 curve2:(id)arg3 parameterRange2:(struct FBRange)arg4 reversed:(BOOL)arg5;
@property(readonly, nonatomic) BOOL reversed; // @synthesize reversed=_reversed;
@property(readonly, nonatomic) struct FBRange parameterRange2; // @synthesize parameterRange2=_parameterRange2;
@property(readonly, nonatomic) FBBezierCurve *curve2; // @synthesize curve2=_curve2;
@property(readonly, nonatomic) struct FBRange parameterRange1; // @synthesize parameterRange1=_parameterRange1;
@property(readonly, nonatomic) FBBezierCurve *curve1; // @synthesize curve1=_curve1;
- (void).cxx_destruct;
- (id)description;
- (void)clearCache;
- (void)merge:(id)arg1;
- (id)flip;
@property(readonly, nonatomic) FBBezierIntersection *middleIntersection;
@property(readonly, nonatomic, getter=isAtStopOfCurve2) BOOL atStopOfCurve2;
@property(readonly, nonatomic, getter=isAtStartOfCurve2) BOOL atStartOfCurve2;
@property(readonly, nonatomic, getter=isAtStopOfCurve1) BOOL atStopOfCurve1;
@property(readonly, nonatomic, getter=isAtStartOfCurve1) BOOL atStartOfCurve1;
- (void)computeCurve2;
- (void)computeCurve1;
@property(readonly, nonatomic) FBBezierCurve *curve2RightBezier;
@property(readonly, nonatomic) FBBezierCurve *curve2OverlappingBezier;
@property(readonly, nonatomic) FBBezierCurve *curve2LeftBezier;
@property(readonly, nonatomic) FBBezierCurve *curve1RightBezier;
@property(readonly, nonatomic) FBBezierCurve *curve1OverlappingBezier;
@property(readonly, nonatomic) FBBezierCurve *curve1LeftBezier;
- (id)initWithCurve1:(id)arg1 parameterRange1:(struct FBRange)arg2 curve2:(id)arg3 parameterRange2:(struct FBRange)arg4 reversed:(BOOL)arg5;

@end

