//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NetworkExtension/NEIKEv2Payload.h>

@class NEIKEv2DHProtocol, NSData;

@interface NEIKEv2KeyExchangePayload : NEIKEv2Payload
{
    NEIKEv2DHProtocol *_dh;
    NSData *_dhPublicKey;
}

+ (id)copyTypeDescription;
- (void).cxx_destruct;
@property(retain) NSData *dhPublicKey; // @synthesize dhPublicKey=_dhPublicKey;
@property(retain) NEIKEv2DHProtocol *dh; // @synthesize dh=_dh;
- (_Bool)parsePayloadData;
- (_Bool)generatePayloadData;
- (_Bool)hasRequiredFields;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (unsigned long long)type;

@end

