//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Network/NWPrettyDescription-Protocol.h>

@class NWEndpoint;
@protocol OS_nw_protocol_transform;

@interface NWProtocolTransform : NSObject <NWPrettyDescription>
{
    NSObject<OS_nw_protocol_transform> *_internalTransform;
}

@property(retain) NSObject<OS_nw_protocol_transform> *internalTransform; // @synthesize internalTransform=_internalTransform;
- (void).cxx_destruct;
@property(nonatomic) _Bool disablePathFallback;
@property(nonatomic) int dataMode;
- (void)setFastOpenForceEnable:(_Bool)arg1;
- (_Bool)fastOpenForceEnable;
@property(nonatomic) _Bool tfoNoCookie;
@property(nonatomic) _Bool tfo;
@property(nonatomic) int multipathService;
@property(nonatomic) _Bool noProxy;
@property(nonatomic) _Bool prohibitDirect;
@property(nonatomic) unsigned long long fallbackMode;
@property(copy, nonatomic) NWEndpoint *replacementEndpoint;
- (void)appendProtocol:(id)arg1 atLevel:(int)arg2;
- (void)clearProtocolsAtLevel:(int)arg1;
- (void)disableProtocol:(struct nw_protocol_identifier *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)privateDescription;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 showFullContent:(_Bool)arg2;
- (id)initWithCTransform:(id)arg1;
- (id)init;

@end

