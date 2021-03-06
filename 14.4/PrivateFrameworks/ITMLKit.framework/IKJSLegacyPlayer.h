//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import <ITMLKit/IKJSLegacyPlayer-Protocol.h>
#import <ITMLKit/NSObject-Protocol.h>
#import <ITMLKit/_IKJSLegacyPlayer-Protocol.h>
#import <ITMLKit/_IKJSLegacyPlayerProxy-Protocol.h>

@class IKDOMElement, NSString;
@protocol IKJSPlayerAppBridge;

@interface IKJSLegacyPlayer : IKJSObject <NSObject, IKJSLegacyPlayer, _IKJSLegacyPlayerProxy, _IKJSLegacyPlayer>
{
    id <IKJSPlayerAppBridge> _appBridge;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IKJSPlayerAppBridge> appBridge; // @synthesize appBridge=_appBridge;
@property(readonly, nonatomic) __weak IKDOMElement *currentAVMediaElement;
- (id)asPrivateIKJSLegacyPlayer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

