#ifndef IConditionsChangeListener_h
#define IConditionsChangeListener_h

#include "lcio.h"
#include "EVENT/LCCollection.h"

namespace lccd {
  
/** Simple interface that allows notification of implementation classes if
 *  a conditions data set has changed.
 * 
 *  @author F.Gaede, DESY
 *  @version $Id: IConditionsChangeListener.hh,v 1.1.1.1 2005-02-10 12:17:54 gaede Exp $
 */

class IConditionsChangeListener {
  
public:

  virtual ~IConditionsChangeListener() {} 

  /** The callback - use updated conditions data collection as needed, e.g.
   *  repopulate a calibration map.
   */ 
  virtual void conditionsChanged( lcio::LCCollection* col ) = 0 ;
  
};

} ; //end namespace

#endif // IConditionsChangeListener_h
