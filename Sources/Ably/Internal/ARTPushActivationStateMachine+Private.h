//
//  ARTPushActivationStateMachine+Private.h
//
//  Created by Ricardo Pereira on 26/01/2018.
//  Copyright (c) 2014 Ably. All rights reserved.
//

#import "ARTPushActivationStateMachine.h"

NS_ASSUME_NONNULL_BEGIN

@class ARTRestInternal;
@protocol ARTPushRegistererDelegate;

extern NSString *const ARTPushActivationCurrentStateKey;
extern NSString *const ARTPushActivationPendingEventsKey;

@interface ARTPushActivationStateMachine ()

@property (nonatomic, strong) ARTRestInternal *rest;

- (instancetype)initWithRest:(ARTRestInternal *)rest
                    delegate:(id<ARTPushRegistererDelegate, NSObject>)delegate NS_DESIGNATED_INITIALIZER;

/// The delegate property should be written to only for internal testing purposes.
@property (weak, nonatomic) id<ARTPushRegistererDelegate, NSObject> delegate;

@property (nonatomic, copy, nullable) void (^transitions)(ARTPushActivationEvent *event, ARTPushActivationState *from, ARTPushActivationState *to);
@property (nonatomic, copy, nullable) void (^onEvent)(ARTPushActivationEvent *event, ARTPushActivationState *state);
@property (readonly, nonatomic) ARTPushActivationEvent *lastEvent_nosync;
@property (readonly, nonatomic) ARTPushActivationState *current_nosync;

@end

NS_ASSUME_NONNULL_END