//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TMOAuth : NSObject
{
    NSString *_baseString;
    NSString *_headerString;
}

+ (id)headerForURL:(id)arg1 method:(id)arg2 postParameters:(id)arg3 nonce:(id)arg4 consumerKey:(id)arg5 consumerSecret:(id)arg6 token:(id)arg7 tokenSecret:(id)arg8;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *headerString; // @synthesize headerString=_headerString;
@property(readonly, nonatomic) NSString *baseString; // @synthesize baseString=_baseString;
- (id)initWithURL:(id)arg1 method:(id)arg2 postParameters:(id)arg3 nonce:(id)arg4 consumerKey:(id)arg5 consumerSecret:(id)arg6 token:(id)arg7 tokenSecret:(id)arg8;

@end

