//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface MCAPNInfo : NSObject
{
    NSString *_apnName;
    NSString *_username;
    NSString *_password;
    NSString *_proxy;
    NSNumber *_proxyPort;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *proxyPort; // @synthesize proxyPort=_proxyPort;
@property(retain, nonatomic) NSString *proxy; // @synthesize proxy=_proxy;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSString *apnName; // @synthesize apnName=_apnName;
- (id)installationWarnings;
- (id)defaultsRepresentation;
- (id)strippedDefaultsRepresentation;
- (id)description;

@end

