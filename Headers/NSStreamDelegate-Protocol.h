#import "NSObject.h"

@class NSStream;

@protocol NSStreamDelegate <NSObject>

@optional
- (void)stream:(NSStream *)arg1 handleEvent:(unsigned long long)arg2;
@end

