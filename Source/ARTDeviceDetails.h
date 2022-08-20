#import <Foundation/Foundation.h>
#import <Ably/ARTPush.h>

@class ARTDevicePushDetails;

NS_ASSUME_NONNULL_BEGIN

/**
 * BEGIN CANONICAL DOCSTRING
 * Contains the properties of a device registered for push notifications.
 * END CANONICAL DOCSTRING
 */
@interface ARTDeviceDetails : NSObject

@property (strong, nonatomic) ARTDeviceId *id;
@property (strong, nullable, nonatomic) NSString *clientId;
@property (strong, nonatomic) NSString *platform;
@property (strong, nonatomic) NSString *formFactor;
@property (strong, nonatomic) NSDictionary<NSString *, NSString *> *metadata;
@property (strong, nonatomic) ARTDevicePushDetails *push;

- (instancetype)init;
- (instancetype)initWithId:(ARTDeviceId *)deviceId;

@end

NS_ASSUME_NONNULL_END
