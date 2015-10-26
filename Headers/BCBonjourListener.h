#import "NSObject.h"

@interface BCBonjourListener : NSObject
{
    int _port;
    CDUnknownBlockType _handler;
    struct __CFSocket *_socket4;
    struct __CFRunLoopSource *_source4;
    struct __CFSocket *_socket6;
    struct __CFRunLoopSource *_source6;
}

@property(nonatomic) struct __CFRunLoopSource *source6; // @synthesize source6=_source6;
@property(nonatomic) struct __CFSocket *socket6; // @synthesize socket6=_socket6;
@property(nonatomic) struct __CFRunLoopSource *source4; // @synthesize source4=_source4;
@property(nonatomic) struct __CFSocket *socket4; // @synthesize socket4=_socket4;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(nonatomic) int port; // @synthesize port=_port;
- (void).cxx_destruct;
- (void)acceptConnectionFromAddress:(struct __CFData *)arg1 onSocket:(int)arg2;
- (struct __CFSocket *)newSocket:(id *)arg1 ip4:(BOOL)arg2 source:(struct __CFRunLoopSource **)arg3;
- (struct __CFRunLoopSource *)newRunLoopSourceForSocket:(struct __CFSocket *)arg1;
- (void)stop;
- (BOOL)start:(id *)arg1;
- (void)dealloc;
- (id)initWithConnectionHandler:(CDUnknownBlockType)arg1;

@end

