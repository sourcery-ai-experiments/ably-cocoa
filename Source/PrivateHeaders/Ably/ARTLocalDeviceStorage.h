#import <Foundation/Foundation.h>
#import <Ably/ARTDeviceStorage.h>

@class ARTInternalLog;

NS_ASSUME_NONNULL_BEGIN

/// :nodoc:
NS_SWIFT_NAME(LocalDeviceStorage)
@interface ARTLocalDeviceStorage : NSObject<ARTDeviceStorage>

- (instancetype)initWithLogger:(ARTInternalLog *)logger;

+ (instancetype)newWithLogger:(ARTInternalLog *)logger;

@end

NS_ASSUME_NONNULL_END
