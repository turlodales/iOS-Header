//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SLAbsintheSigningSession : NSObject
{
    NSString *_certURL;
    NSString *_sessionURL;
}

- (void).cxx_destruct;
- (id)_urlEncodedString:(id)arg1;
- (id)signatureForData:(id)arg1;
- (_Bool)establish;
- (void)dealloc;
- (id)initWithCertURL:(id)arg1 sessionURL:(id)arg2;

@end

