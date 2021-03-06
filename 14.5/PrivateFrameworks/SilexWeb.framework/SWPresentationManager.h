//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexWeb/SWMessageHandler-Protocol.h>
#import <SilexWeb/SWPresentationManager-Protocol.h>

@class NSString;
@protocol SWLogger, SWScriptsManager;

@interface SWPresentationManager : NSObject <SWMessageHandler, SWPresentationManager>
{
    unsigned long long _presentationState;
    double _height;
    CDUnknownBlockType loadBlock;
    CDUnknownBlockType presentableBlock;
    id <SWScriptsManager> _scriptsManager;
    id <SWLogger> _logger;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SWLogger> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <SWScriptsManager> scriptsManager; // @synthesize scriptsManager=_scriptsManager;
@property(copy, nonatomic, setter=onPresentable:) CDUnknownBlockType presentableBlock; // @synthesize presentableBlock;
@property(copy, nonatomic, setter=onLoad:) CDUnknownBlockType loadBlock; // @synthesize loadBlock;
@property(readonly, nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) unsigned long long presentationState; // @synthesize presentationState=_presentationState;
- (id)descriptionForPresentationState:(unsigned long long)arg1;
- (void)didReceiveMessage:(id)arg1 securityOrigin:(id)arg2;
- (void)refresh;
- (id)initWithWebContentScriptsManager:(id)arg1 messageHandlerManager:(id)arg2 documentStateProvider:(id)arg3 logger:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

