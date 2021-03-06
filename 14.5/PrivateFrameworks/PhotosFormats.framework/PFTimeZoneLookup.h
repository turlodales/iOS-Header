//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PFTimeZoneLookup : NSObject
{
    struct unique_ptr<boost::interprocess::basic_managed_mapped_file<char, boost::interprocess::rbtree_best_fit<boost::interprocess::null_mutex_family, boost::interprocess::offset_ptr<void, long, unsigned long, 0>, 0>, bipc::iset_index>, std::__1::default_delete<boost::interprocess::basic_managed_mapped_file<char, boost::interprocess::rbtree_best_fit<boost::interprocess::null_mutex_family, boost::interprocess::offset_ptr<void, long, unsigned long, 0>, 0>, bipc::iset_index>>> _backingFile;
    const struct vector<boost::container::basic_string<char, std::__1::char_traits<char>, boost::interprocess::allocator<char, boost::interprocess::segment_manager<char, boost::interprocess::rbtree_best_fit<boost::interprocess::null_mutex_family, boost::interprocess::offset_ptr<void, long, unsigned long, 0>, 0>, iset_index>>>, boost::interprocess::allocator<boost::container::basic_string<char, std::__1::char_traits<char>, boost::interprocess::allocator<char, boost::interprocess::segment_manager<char, boost::interprocess::rbtree_best_fit<boost::interprocess::null_mutex_family, boost::interprocess::offset_ptr<void, long, unsigned long, 0>, 0>, iset_index>>>, boost::interprocess::segment_manager<char, boost::interprocess::rbtree_best_fit<boost::interprocess::null_mutex_family, boost::interprocess::offset_ptr<void, long, unsigned long, 0>, 0>, iset_index>>> *_timezones;
    const struct rtree<std::__1::pair<boost::geometry::model::point<float, 2, boost::geometry::cs::cartesian>, unsigned short>, boost::geometry::index::quadratic<32, 8>, boost::geometry::index::indexable<std::__1::pair<boost::geometry::model::point<float, 2, boost::geometry::cs::cartesian>, unsigned short>>, boost::geometry::index::equal_to<std::__1::pair<boost::geometry::model::point<float, 2, boost::geometry::cs::cartesian>, unsigned short>>, boost::interprocess::allocator<std::__1::pair<boost::geometry::model::point<float, 2, boost::geometry::cs::cartesian>, unsigned short>, boost::interprocess::segment_manager<char, boost::interprocess::rbtree_best_fit<boost::interprocess::null_mutex_family, boost::interprocess::offset_ptr<void, long, unsigned long, 0>, 0>, iset_index>>> *_rtree;
    _Bool _loaded;
    NSString *_cacheDirectory;
    NSString *_indexFile;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)createIndexFromArchiveFile:(id)arg1 tempIndexFile:(id)arg2;
- (_Bool)loadIndexFile;
- (void)loadOrCreateIndex;
- (_Bool)makeTimeZoneLookupCacheFile;
- (struct CLLocationCoordinate2D)anyCoordinateForTimeZoneName:(id)arg1;
- (id)timeZoneNameForCoordinate:(struct CLLocationCoordinate2D)arg1;
- (id)init;

@end

