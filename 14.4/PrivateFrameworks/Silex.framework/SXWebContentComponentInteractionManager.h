//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SXComponentView;
@protocol SWInteractionProvider, SXComponentInteractionHandler, SXComponentInteractionHandlerManager, SXWebContentComponentInteractionHandlerFactory;

@interface SXWebContentComponentInteractionManager : NSObject
{
    SXComponentView *_componentView;
    id <SWInteractionProvider> _interactionProvider;
    id <SXComponentInteractionHandlerManager> _interactionHandlerManager;
    id <SXWebContentComponentInteractionHandlerFactory> _componentInteractionHandlerFactory;
    id <SXComponentInteractionHandler> _currentInteractionHandler;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <SXComponentInteractionHandler> currentInteractionHandler; // @synthesize currentInteractionHandler=_currentInteractionHandler;
@property(readonly, nonatomic) id <SXWebContentComponentInteractionHandlerFactory> componentInteractionHandlerFactory; // @synthesize componentInteractionHandlerFactory=_componentInteractionHandlerFactory;
@property(readonly, nonatomic) __weak id <SXComponentInteractionHandlerManager> interactionHandlerManager; // @synthesize interactionHandlerManager=_interactionHandlerManager;
@property(readonly, nonatomic) id <SWInteractionProvider> interactionProvider; // @synthesize interactionProvider=_interactionProvider;
@property(readonly, nonatomic) __weak SXComponentView *componentView; // @synthesize componentView=_componentView;
- (void)manageInteractionHandlerForInteraction:(id)arg1;
- (id)initWithComponentView:(id)arg1 interactionProvider:(id)arg2 interactionHandlerManager:(id)arg3 componentInteractionHandlerFactory:(id)arg4;

@end

