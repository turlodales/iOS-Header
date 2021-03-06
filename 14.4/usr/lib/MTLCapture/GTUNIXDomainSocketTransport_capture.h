//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MTLCapture/GTBaseSocketTransport_capture.h>

@class NSObject, NSURL;
@protocol OS_dispatch_source;

@interface GTUNIXDomainSocketTransport_capture : GTBaseSocketTransport_capture
{
    int _mode;
    NSObject<OS_dispatch_source> *_connSource;
}

- (void)_invalidate;
- (id)connect;
- (void)_connectClient:(id)arg1 future:(id)arg2;
- (void)_connectServer:(id)arg1 future:(id)arg2;
@property(retain, nonatomic) NSURL *url; // @dynamic url;
- (id)initWithMode:(int)arg1;

@end

