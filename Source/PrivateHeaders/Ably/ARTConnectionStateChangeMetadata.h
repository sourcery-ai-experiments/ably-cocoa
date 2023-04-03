@import Foundation;

@class ARTErrorInfo;

NS_ASSUME_NONNULL_BEGIN

/**
 Provides metadata for a request to perform an operation that may cause an `ARTRealtimeInternal` instance to emit a connection state change.

 `ARTRealtimeInternal` will incorporate this data into the `ARTConnectionStateChange` object that it emits as a result of the connection state change.
 */
NS_SWIFT_NAME(ConnectionStateChangeMetadata)
@interface ARTConnectionStateChangeMetadata: NSObject

/**
 Information about the error that triggered this state change, if any.
 */
@property (nullable, nonatomic, readonly) ARTErrorInfo *errorInfo;

/**
 Creates an `ARTConnectionStateChangeMetadata` instance whose `errorInfo` is `nil`.
 */
- (instancetype)init;

- (instancetype)initWithErrorInfo:(nullable ARTErrorInfo *)errorInfo NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END