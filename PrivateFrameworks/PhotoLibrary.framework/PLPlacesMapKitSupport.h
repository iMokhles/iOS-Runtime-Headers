/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLPlacesMapKitSupport : NSObject {
    Class _annotationViewClass;
    struct { 
        struct { 
            double x; 
            double y; 
        } origin; 
        struct { 
            double width; 
            double height; 
        } size; 
    } _mapRectNull;
    struct { 
        struct { 
            double x; 
            double y; 
        } origin; 
        struct { 
            double width; 
            double height; 
        } size; 
    } _mapRectWorld;
    Class _mapViewClass;
    int (*_mkCoordinateForMapPoint;
    int (*_mkCoordinateRegionForMapRect;
    int (*_mkMapPointForCoordinate;
    int (*_mkMapPointsPerMeterAtLatitude;
    int (*_mkMapRectForCoordinateRegion;
    int (*_mkMapRectIntersectsMapRectWrappingMeridian;
    int (*_mkMapRectIntersectsRect;
    int (*_mkMapRectMakeWithRadialDistance;
    int (*_mkMapRectUnion;
    int (*_mkMetersPerMapPointAtLatitude;
    Class _pinAnnotationViewClass;
    Class _polylineClass;
    Class _polylineViewClass;
}

+ (id)sharedInstance;

- (Class)annotationViewClass;
- (struct { double x1; double x2; })coordinateForMapPoint:(struct { double x1; double x2; })arg1;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })coordinateRegionForMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)init;
- (struct { double x1; double x2; })mapPointForCoordinate:(struct { double x1; double x2; })arg1;
- (double)mapPointsPerMeterAtLatitude:(double)arg1;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })mapRectAtCoordinate:(struct { double x1; double x2; })arg1 radialDistance:(double)arg2;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })mapRectForCoordinateRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (BOOL)mapRectIntersectsRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 rect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (BOOL)mapRectIntersectsWrappingMeridian:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 rect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })mapRectNull;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })mapRectUnion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 rect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })mapRectWorld;
- (Class)mapViewClass;
- (double)metersPerMapPointAtLatitude:(double)arg1;
- (Class)pinAnnotationViewClass;
- (Class)polylineClass;
- (Class)polylineViewClass;

@end
