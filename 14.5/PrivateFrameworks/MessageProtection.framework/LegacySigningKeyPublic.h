//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface LegacySigningKeyPublic : NSObject
{
    id _secKeyRef;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id secKeyRef; // @synthesize secKeyRef=_secKeyRef;
- (_Bool)verifySignature:(id)arg1 ofData:(id)arg2;
- (id)dataRepresentation;
- (id)initWithData:(id)arg1 error:(id *)arg2;

@end

