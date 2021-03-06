//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDRating, GEOPDUser, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDReview : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDRating *_rating;
    NSString *_reviewId;
    double _reviewTime;
    GEOPDUser *_reviewer;
    NSMutableArray *_snippets;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int has_reviewTime:1;
        unsigned int read_unknownFields:1;
        unsigned int read_rating:1;
        unsigned int read_reviewId:1;
        unsigned int read_reviewer:1;
        unsigned int read_snippets:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)snippetType;
+ (id)reviewsForPlaceData:(id)arg1;
- (void).cxx_destruct;
- (void)clearUnknownFields:(_Bool)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)initWithJSON:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (id)description;
@property(retain, nonatomic) GEOPDRating *rating;
@property(readonly, nonatomic) _Bool hasRating;
@property(retain, nonatomic) NSString *reviewId;
@property(readonly, nonatomic) _Bool hasReviewId;
@property(retain, nonatomic) GEOPDUser *reviewer;
@property(readonly, nonatomic) _Bool hasReviewer;
@property(nonatomic) _Bool hasReviewTime;
@property(nonatomic) double reviewTime;
- (id)snippetAtIndex:(unsigned long long)arg1;
- (unsigned long long)snippetsCount;
- (void)addSnippet:(id)arg1;
- (void)clearSnippets;
@property(retain, nonatomic) NSMutableArray *snippets;
- (id)initWithData:(id)arg1;
- (id)init;
- (id)_bestSnippetLocale;
- (id)_bestSnippet;

@end

