//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKDatabaseOperationInfo.h>

#import <CloudKit/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSString, NSURL;

@interface CKCodeFunctionInvokeOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>
{
    _Bool _local;
    _Bool _shouldFetchAssetContentInMemory;
    NSString *_serviceName;
    NSString *_functionName;
    NSArray *_requestLocalSerializations;
    NSArray *_requestLocalEnvelopes;
    NSData *_permittedRemoteMeasurement;
    NSURL *_explicitBaseURL;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) _Bool shouldFetchAssetContentInMemory; // @synthesize shouldFetchAssetContentInMemory=_shouldFetchAssetContentInMemory;
@property(nonatomic) _Bool local; // @synthesize local=_local;
@property(copy, nonatomic) NSURL *explicitBaseURL; // @synthesize explicitBaseURL=_explicitBaseURL;
@property(copy, nonatomic) NSData *permittedRemoteMeasurement; // @synthesize permittedRemoteMeasurement=_permittedRemoteMeasurement;
@property(copy, nonatomic) NSArray *requestLocalEnvelopes; // @synthesize requestLocalEnvelopes=_requestLocalEnvelopes;
@property(copy, nonatomic) NSArray *requestLocalSerializations; // @synthesize requestLocalSerializations=_requestLocalSerializations;
@property(copy, nonatomic) NSString *functionName; // @synthesize functionName=_functionName;
@property(copy, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

