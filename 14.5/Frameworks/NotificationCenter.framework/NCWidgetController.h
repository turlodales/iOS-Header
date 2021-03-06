//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NotificationCenter/_NCWidgetController_Service_IPC-Protocol.h>

@class NSXPCConnection;

@interface NCWidgetController : NSObject <_NCWidgetController_Service_IPC>
{
    NCWidgetController *_strongReference;
    NSXPCConnection *_connection;
}

+ (id)widgetContentUnavailableViewWithButtonTitle:(id)arg1 buttonAction:(CDUnknownBlockType)arg2;
+ (id)widgetContentUnavailableViewWithTitle:(id)arg1;
+ (id)widgetController;
- (void).cxx_destruct;
@property(retain, nonatomic, getter=_connection, setter=_setConnection:) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic, getter=_strongReference, setter=_setStrongReference:) NCWidgetController *strongReference; // @synthesize strongReference=_strongReference;
- (void)__didReceiveHasContentRequest;
- (void)requestRefreshAfterDate:(id)arg1 forWidgetWithBundleIdentifier:(id)arg2;
- (void)setHasContent:(_Bool)arg1 forWidgetWithBundleIdentifier:(id)arg2;
- (id)_connectionForRequest;
- (void)_invalidateConnection;
- (void)dealloc;

@end

