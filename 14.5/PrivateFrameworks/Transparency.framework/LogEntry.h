//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Transparency/GPBMessage.h>

#import <Transparency/TransparencyVerifiable-Protocol.h>

@class NSData, NSDictionary, NSMutableArray, SignedLogHead, TransparencyLogEntryVerifier, TransparencyManagedDataStore;

@interface LogEntry : GPBMessage <TransparencyVerifiable>
{
}

+ (id)descriptor;
- (unsigned long long)verifyTLTEntryForPerApplicationLogHead:(id)arg1 error:(id *)arg2;
- (_Bool)setInclusionResult:(unsigned long long)arg1 signedLogHead:(id)arg2 error:(id *)arg3;
- (unsigned long long)verifyWithError:(id *)arg1;
- (void)setMetadataValue:(id)arg1 key:(id)arg2;
- (void)setMetadata:(id)arg1;
@property(readonly) NSDictionary *metadata;
@property(retain) TransparencyManagedDataStore *dataStore;
@property(retain) TransparencyLogEntryVerifier *verifier;

// Remaining properties
@property(nonatomic) _Bool hasSlh; // @dynamic hasSlh;
@property(retain, nonatomic) NSMutableArray *hashesOfPeersInPathToRootArray; // @dynamic hashesOfPeersInPathToRootArray;
@property(readonly, nonatomic) unsigned long long hashesOfPeersInPathToRootArray_Count; // @dynamic hashesOfPeersInPathToRootArray_Count;
@property(nonatomic) int logType; // @dynamic logType;
@property(copy, nonatomic) NSData *nodeBytes; // @dynamic nodeBytes;
@property(nonatomic) unsigned long long nodePosition; // @dynamic nodePosition;
@property(retain, nonatomic) SignedLogHead *slh; // @dynamic slh;

@end

