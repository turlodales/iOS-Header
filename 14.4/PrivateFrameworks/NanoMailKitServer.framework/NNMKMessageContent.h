//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoMailKitServer/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSString;

@interface NNMKMessageContent : NSObject <NSSecureCoding>
{
    _Bool _mainAlternativeValid;
    _Bool _hasTextData;
    _Bool _partiallyLoaded;
    NSString *_messageId;
    NSString *_externalReferenceId;
    NSData *_textData;
    NSData *_htmlContentData;
    unsigned long long _originalContentSize;
    NSArray *_attachments;
}

+ (id)classesForUnarchivingTextData;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) _Bool partiallyLoaded; // @synthesize partiallyLoaded=_partiallyLoaded;
@property(retain, nonatomic) NSArray *attachments; // @synthesize attachments=_attachments;
@property(nonatomic) unsigned long long originalContentSize; // @synthesize originalContentSize=_originalContentSize;
@property(nonatomic) _Bool hasTextData; // @synthesize hasTextData=_hasTextData;
@property(retain, nonatomic) NSData *htmlContentData; // @synthesize htmlContentData=_htmlContentData;
@property(retain, nonatomic) NSData *textData; // @synthesize textData=_textData;
@property(nonatomic) _Bool mainAlternativeValid; // @synthesize mainAlternativeValid=_mainAlternativeValid;
@property(retain, nonatomic) NSString *externalReferenceId; // @synthesize externalReferenceId=_externalReferenceId;
@property(retain, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
- (id)description;
@property(readonly, nonatomic) _Bool isHTML;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

