//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSExtensionContext.h>

#import <IdentityLookupUI/ILClassificationUIExtensionVendorProtocol-Protocol.h>

@class NSString;

@interface ILClassificationUIExtensionContext : NSExtensionContext <ILClassificationUIExtensionVendorProtocol>
{
    _Bool _readyForClassificationResponse;
}

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
@property(nonatomic, getter=isReadyForClassificationResponse) _Bool readyForClassificationResponse; // @synthesize readyForClassificationResponse=_readyForClassificationResponse;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)viewController;
- (oneway void)classificationResponseForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)prepareForClassificationRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

