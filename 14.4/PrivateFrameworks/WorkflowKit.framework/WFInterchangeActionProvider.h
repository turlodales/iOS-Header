//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFActionProvider.h>

@interface WFInterchangeActionProvider : WFActionProvider
{
}

- (void)deleteCache;
- (void)updateCache:(CDUnknownBlockType)arg1;
- (id)actionWithInterchangeAction:(id)arg1 serializedParameters:(id)arg2;
- (void)createActionsForRequests:(id)arg1;
- (id)availableActionIdentifiers;

@end

