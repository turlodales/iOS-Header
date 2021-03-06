//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/NSSecureCoding-Protocol.h>

@class NSFileHandle, NSNumber, NSString;

@interface CKFileOpenInfo : NSObject <NSSecureCoding>
{
    _Bool _shouldReadRawEncryptedData;
    NSString *_UUID;
    NSString *_path;
    NSNumber *_deviceID;
    NSNumber *_fileID;
    NSNumber *_generationID;
    NSFileHandle *_clientOpenedFileHandle;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSFileHandle *clientOpenedFileHandle; // @synthesize clientOpenedFileHandle=_clientOpenedFileHandle;
@property(nonatomic) _Bool shouldReadRawEncryptedData; // @synthesize shouldReadRawEncryptedData=_shouldReadRawEncryptedData;
@property(retain, nonatomic) NSNumber *generationID; // @synthesize generationID=_generationID;
@property(retain, nonatomic) NSNumber *fileID; // @synthesize fileID=_fileID;
@property(retain, nonatomic) NSNumber *deviceID; // @synthesize deviceID=_deviceID;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
- (id)description;
- (id)CKPropertiesDescription;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

