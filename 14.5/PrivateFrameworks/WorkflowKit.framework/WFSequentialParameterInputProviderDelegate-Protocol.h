//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/NSObject-Protocol.h>

@class NSDictionary, WFAction, WFParameter, WFSequentialParameterInputProvider;
@protocol WFParameterState;

@protocol WFSequentialParameterInputProviderDelegate <NSObject>
- (void)sequentialParameterInputProviderDidCancel:(WFSequentialParameterInputProvider *)arg1;
- (void)sequentialParameterInputProvider:(WFSequentialParameterInputProvider *)arg1 didFinishWithInputtedStates:(NSDictionary *)arg2;
- (void)sequentialParameterInputProvider:(WFSequentialParameterInputProvider *)arg1 didAdvanceToParameter:(WFParameter *)arg2 action:(WFAction *)arg3 defaultState:(id <WFParameterState>)arg4 completion:(void (^)(_Bool, id <WFParameterState>))arg5;
@end

