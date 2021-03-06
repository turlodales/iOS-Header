//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSArray, NSString, NSURL, PKBarcode;

@interface PKContent : NSObject <NSSecureCoding>
{
    PKBarcode *_barcode;
    NSArray *_storeIdentifiers;
    NSURL *_appLaunchURL;
    NSString *_localizedDescription;
}

+ (_Bool)supportsSecureCoding;
+ (id)createWithFileURL:(id)arg1 dataTypeIdentifier:(id)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *localizedDescription; // @synthesize localizedDescription=_localizedDescription;
@property(copy, nonatomic) NSURL *appLaunchURL; // @synthesize appLaunchURL=_appLaunchURL;
@property(copy, nonatomic) NSArray *storeIdentifiers; // @synthesize storeIdentifiers=_storeIdentifiers;
@property(retain, nonatomic) PKBarcode *barcode; // @synthesize barcode=_barcode;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)flushFormattedFieldValues;
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2 privateBundle:(id)arg3;

@end

