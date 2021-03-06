//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSupport/NSObject-Protocol.h>

@protocol MSPPropertyListReplicaSerialization <NSObject>
@property(readonly, nonatomic) id propertyListRepresentation;
- (id)propertyListRepresentationDecoratingRecordsWithBlock:(NSDictionary * (^)(id <MSPReplicaRecord>))arg1;
- (id)initWithPropertyListRepresentation:(id)arg1 recordCreationHandler:(id <MSPReplicaRecord> (^)(NSUUID *, id <MSPReplicaRecord>))arg2;
@end

