#import "ARTRealtimeTransportFactory.h"
#import "ARTWebsocketTransport+Private.h"
#import "ARTWebSocketFactory.h"

@implementation ARTDefaultRealtimeTransportFactory

- (id<ARTRealtimeTransport>)transportWithRest:(ARTRestInternal *)rest options:(ARTClientOptions *)options resumeKey:(NSString *)resumeKey connectionSerial:(NSNumber *)connectionSerial logger:(ARTInternalLog *)logger {
    const id<ARTWebSocketFactory> webSocketFactory = [[ARTDefaultWebSocketFactory alloc] init];

    return [[ARTWebSocketTransport alloc] initWithRest:rest
                                               options:options
                                             resumeKey:resumeKey
                                      connectionSerial:connectionSerial
                                                logger:logger
                                      webSocketFactory:webSocketFactory];
}

@end
