//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ManagedConfiguration/NSCopying-Protocol.h>

@class NSNumber, NSString;

@interface MCBook : NSObject <NSCopying>
{
    NSString *_author;
    NSString *_title;
    NSString *_kind;
    NSString *_fullPath;
    NSString *_version;
    NSString *_persistentID;
    NSNumber *_iTunesStoreID;
    NSString *_buyParams;
    NSString *_state;
    NSNumber *_downloadIdentifier;
    MCBook *_previousVersion;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MCBook *previousVersion; // @synthesize previousVersion=_previousVersion;
@property(retain, nonatomic) NSNumber *downloadIdentifier; // @synthesize downloadIdentifier=_downloadIdentifier;
@property(retain, nonatomic) NSString *state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *buyParams; // @synthesize buyParams=_buyParams;
@property(retain, nonatomic) NSNumber *iTunesStoreID; // @synthesize iTunesStoreID=_iTunesStoreID;
@property(copy, nonatomic) NSString *persistentID; // @synthesize persistentID=_persistentID;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *fullPath; // @synthesize fullPath=_fullPath;
@property(copy, nonatomic) NSString *kind; // @synthesize kind=_kind;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *author; // @synthesize author=_author;
- (id)description;
- (void)updateBookAttributesByCopyingFromBook:(id)arg1;
- (id)friendlyName;
- (id)manifestDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithManifestDictionary:(id)arg1;
- (id)init;

@end

